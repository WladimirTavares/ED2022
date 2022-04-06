#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int & ra = a;

    cout << ra << endl; //print 5

    ra = 6;

    cout << a << endl; // print 6

  
}


