#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;



int main(){

    char a;
    int b;
    long c;
    bool d;
    float e;
    double f;


    cout << "char size " << sizeof(char) << endl;
    cout << "int size " << sizeof(int) << endl;
    cout << "long size " << sizeof(long) << endl;
    cout << "bool size " << sizeof(bool) << endl;
    cout << "float size " << sizeof(float) << endl;
    cout << "double size " << sizeof(double) << endl;

    cout << "limites int [ " << INT_MIN << "," << INT_MAX << "]" << endl;
    cout << "limites long [ " << LONG_MIN << "," << LONG_MAX << "]" << endl;
    cout << "limites float [ " << FLT_MIN << "," << FLT_MAX << "]" << endl;
    cout << "limites double [ " << DBL_MIN << "," << DBL_MAX << "]" << endl;


    /*Difference between 1 and the least value greater than 1 that is representable.*/
    cout << "float epsilon " << FLT_EPSILON << endl;
    cout << "double epsilon " << DBL_EPSILON << endl;


    
    /*Modifificadores*/
    unsigned int g;
    unsigned long h;
    long double i;


    cout << "limites int [ " << 0 << "," << UINT_MAX << "]" << endl;
    cout << "limites long [ " << 0 << "," << ULONG_MAX << "]" << endl;

    cout << "limites long double [ " << LDBL_MIN << "," << LDBL_MAX << "]" << endl;










    
     




}

