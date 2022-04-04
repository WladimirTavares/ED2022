#include <iostream>
#include <algorithm>    // std::swap
#include <math.h>

using std::cout;
using std::endl;




int main(){

    enum class Color {RED, BLUE};

    enum class Fruit {BANANA, APPLE};

   
    Color cor = Color::RED;
    Fruit fruta = Fruit::BANANA;
    /*
    error: no match for ‘operator==’ (operand types are ‘main()::Color’ and ‘main()::Fruit’
    */
    if( cor == fruta )
        cout << "iguais" << endl;
    else
        cout << "diferentes" << endl;


}

