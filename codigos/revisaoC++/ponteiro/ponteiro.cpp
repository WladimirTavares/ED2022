#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>

using namespace std;



int main(){

    int a = 6;
    int * pa;
    double b = 3.0;
    double * pb;

    pa = &a; // operador de endereçamento
    pb = &b;

    cout << a << endl; // 6

    *pa = 7; // operador de desreferenciamento

    cout << a << endl; // 7

    cout << "sizeof(pa) " << sizeof(pa) << endl; //  sizeof(pa) 8
    cout << "sizeof(*pa) " << sizeof(*pa) << endl; // sizeof(*pa) 4
    cout << "sizeof(pb) " << sizeof(pb) << endl; // sizeof(pb) 8
    cout << "sizeof(*pb) " << sizeof(*pb) << endl; //sizeof(*pb) 8

   
    //error: cannot convert ‘double*’ to ‘int*’ in assignment
    //pa = &b;

    // ponteiro void pode receber endereço de tipos diferentes
    // o programador precisa controlar
    void * p;
    //error: ‘void*’ is not a pointer-to-object type
    //*p = 5;

    p = &a;
    int c = 5;
    /*
    void * memcpy ( void * destination, const void * source, size_t num );
    Copy block of memory
    Copies the values of num bytes from the location pointed to by source 
    directly to the memory block pointed to by destination.
    https://www.cplusplus.com/reference/cstring/memcpy/
    */

    memcpy(p, &c, sizeof(c));
    cout << a << endl;

    p = &b;
    double d = 6.8;
    memcpy(p, &d, sizeof(d));
    cout << d << endl;



    p = NULL; // constantes para ponteiros nulo
    p = nullptr; // constante para ponteiro nulo


}

