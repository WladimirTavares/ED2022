#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

class Mobile {
    public:
    int peso;
    bool bar;
    Mobile * esq;
    Mobile * dir;
    Mobile(int peso) : peso(peso) , esq(nullptr), dir(nullptr), bar(false) {}
    Mobile(Mobile * m1, Mobile * m2) : peso(0), esq(m1), dir(m2), bar(true) {} 
    bool is_bar(){ return bar; }
};


int peso(Mobile * m){
   return 0;


}

int num_objetos(Mobile * m){
    return 0;
}


int altura(Mobile * m){
   return 0;
}


bool equilibrado( Mobile * m){
   return false;



} 



int main(){
    
    Mobile * m1 = new Mobile(10);
    Mobile * m2 = new Mobile(20);
    Mobile * m3 = new Mobile(m1,m2);
    Mobile * m4 = new Mobile(30);
    Mobile * m5 = new Mobile(m3,m4);
    

    cout << peso(m5) << endl;
    
    cout << equilibrado(m5) << endl;    

    cout << num_objetos(m5) << endl;

    cout << altura(m5) << endl;    

}

