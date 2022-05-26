#include <iostream>
#include "Josephus.hpp"


using namespace std;

Josephus::Josephus(int n, int e) : n(n), e(e) {
    elem = new int[n];
    vivo = new bool[n];
    for(int i = 0; i < n; i++){
        elem[i] = i+1;
        vivo[i] = true;
    }
}


int Josephus::next(int pos){
    pos = (pos + 1)%n;
    while( !vivo[pos] ) pos = (pos+1)%n;
    return pos;
}

void Josephus::kill(int pos){
    vivo[pos] = false;
}
int Josephus::survivor(){
    int num_vivos = n;
    int pos = e-1;

    while( num_vivos > 1 ){
        pos = next(pos); // posicao do cara que vai morrer
        kill(pos);
        //cout << "morrendo" << elem[pos] << endl;
        pos = next(pos); // vai receber a espada
        num_vivos--;    
    }
    return elem[pos];

}

