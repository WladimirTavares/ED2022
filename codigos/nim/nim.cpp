#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <stdlib.h>  

using namespace std;


void nim(int n){

    if(n ==  0){
        cout << "Eu ganhei o jogo.\n";
    }else if(n%4 == 0){
        int k;

        cout << "É a sua vez de jogar!!!\n";

        while(1){
            cout << "Quantas fichas você quer remover?";
            cin >> k;

            if( k < 1 && k > 3){
                cout << "Jogada inválida\n";
                continue;
            }else{
                cout << "Sobram " << n-k << " fichas\n";
                cout << "Eu vou remover " << 4 - k << " fichas\n";
                cout << "Sobram " << n-4 << " fichas\n";
                break;

            }
        }

        nim(n-4);

    }else{
        cout << "Eu vou remover " << n%4 << " fichas.\n";
        cout << "Sobram " << n-n%4 << "fichas\n";
        nim(n - n%4);
    }

}



int main(){

    int n;

    cout << "Jogo Nim\n";

    cout << "O jogo Nim é jogado por dois jogadores.\n";

    cout << "Inicialmente, temos uma pilha com n fichas.\n";

    cout << "Cada jogador pode tirar uma, duas ou três fichas por turno.\n";

    cout << "O jogador que retirar a última pedra vence o jogo.\n";


    cout << "Vamos começar o jogo!!!\n";

    cout << "Entre com o número de fichas:";
    
    cin >> n;
    
    nim(n);


}

