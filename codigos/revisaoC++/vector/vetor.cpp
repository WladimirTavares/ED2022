#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
ostream& operator<<(ostream &output, const vector<T> & v){
    
    output << "[";
    for(auto it = v.begin(); it != v.end(); it++){
        output << *it << " ";
    }
    output << "]";

    return output;
}

template <class T>
ostream& operator<<(ostream &output, const list<T> & v){
    
    output << "[";
    for(auto it = v.begin(); it != v.end(); it++){
        output << *it << " ";
    }
    output << "]";

    return output;
}

int main(){

    vector <int> v;

    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout << v << endl;

    list <int> l;
    
    l.push_back(5);
    l.push_front(4);
    l.push_front(3);
    l.push_back(7);

    cout << l << endl;


}


