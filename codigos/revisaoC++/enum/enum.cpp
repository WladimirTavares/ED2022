#include <iostream>
#include <algorithm>    // std::swap
#include <math.h>

using std::cout;
using std::endl;




int main(){

    enum Color {RED, BLUE};

    enum Fruit {BANANA, APPLE};

    cout << RED << endl;

    cout << RED + 1 << endl;

    Color cor = RED;
    Fruit fruta = BANANA;
    /*
    warning: comparison between ‘enum main()::Color’ and ‘enum main()::Fruit’ [-Wenum-compare]
    */
    if( cor == fruta )
        cout << "iguais" << endl;
    else
        cout << "diferentes" << endl;


}

