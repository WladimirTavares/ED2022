#include <iostream>
#include <vector>


using namespace std;


int main(){

    vector <int> v;

    v.reserve(10);

    v.push_back(4);
    v.push_back(5);
    
    cout << &v[0] << endl;
    cout << &v[1] << endl;

    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(15);
    
    cout << &v[0] << endl;
    cout << &v[1] << endl;
    cout << &v[2] << endl;
    
    



}

