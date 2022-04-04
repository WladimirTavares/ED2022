#include <iostream>
#include <algorithm>    // std::swap
#include <math.h>

using std::cout; // permite a utilização da função cout de maneira não qualificada
using std::endl;




/*
Namespaces provide a method for preventing name conflicts in large projects.
*/

namespace myspace{
    template <class T> 
    void swap(T & a, T & b){
        T t;
        t = a;
        a = b;
        b = t;
    }
};



int main(){


    int a { 5 }; // uniform in itialization ( C ++11)
    int b { 6 }; // uniform in itialization ( C ++11)

    
    

    // acesso qualificado ns-name :: member-name 
    std::swap(a,b);

    cout << a << "," << b << endl;

    // acesso qualificado ns-name :: member-name
    myspace::swap(a, b);

    cout << a << "," << b << endl;



}

