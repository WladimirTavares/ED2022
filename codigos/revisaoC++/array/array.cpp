#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>

using namespace std;
/*
Exemplo de falta de ortogonalidade da linguagem C
Todos os parâmetros são passado por valor, exceto os vetores
que são passados por ponteiros.
*/
void modifica(int * v, int n){
    for(int i = 0; i < n; i++){
        *(v+i) = 2*i;
    }
}


void modifica2(int* v, int n){
    for(int i = 0; i < n; i++){
        v[i] = 3*i;
    }
}

void print(int * v, int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}


int main(){

    int v[] = {2,3,4,5,6};
    int n = sizeof(v)/sizeof(int);
    cout << n << endl; // 5
    //endereço do vetor
    int * p = v; 

    //endereço em hexadecimal 
    // cada digito hexadecimal representa 4 dígitos binários
    cout << p << endl; //0x7fffe3db5b10

    p = &v[0];

    cout << p << endl; //0x7fffe3db5b10

    //alterando o vetor usando ponteiros
    for(int * p = v, i = 0; p < v + n; p++, i++){
        cout << p << endl;
        *p = i;
    }

    /*
    0x7fffe3db5b10 - endereço do primeiro elemento
    0x7fffe3db5b14 - endereço do segundo elemento
    0x7fffe3db5b18 - endereço do terceiro elemento
    0x7fffe3db5b1c - endereço do quarto elemento
    0x7fffe3db5b20 - endereço do quinto elemento
    */

    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    /*
    0
    1
    2
    3
    4
    */
    
    modifica(v, n);
    print(v, n);


    modifica2(v, n);
    print(v, n);




}

