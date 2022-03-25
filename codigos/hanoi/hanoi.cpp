#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <stdlib.h>  

using namespace std;


void hanoi(int n, int origem, int trabalho, int destino){

    if(n==1){
        printf("Mova disco 1 do pino %d para pino %d\n", origem, destino);
    }else{
        hanoi(n-1, origem, destino, trabalho);
        printf("Mova disco %d do pino %d para pino %d\n", n, origem, destino);
        hanoi(n-1, trabalho, origem, destino);
        
    }

}

int main(){

    int n;

    cout << "Entre com o numero de discos:";
    cin >> n;
    
    hanoi(n, 1, 2, 3);

}

