#include <iostream>
#include <algorithm>    // std::swap
#include <math.h>

using std::cout;
using std::endl;




int main(){

    int fat[]  {1, 2, 6, 24, 120, 720};


    for(auto x : fat){
        cout << x << endl;
    }

    auto x = 10;
    auto y = 2.4;

    auto px = &x;
    auto py = &y;

    decltype(x) z = 15;

    

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(px).name() << endl;
    cout << typeid(py).name() << endl;
    
    decltype( x > y ? x : y ) res = x > y ? x : y ;

    cout << typeid(res).name() << endl;





}

