#include <iostream>
#include <iomanip>


using namespace std;

int T[4][6];


void chomp(int n, int m){

    if(T[n][m] != -1)
        return T[n][m];
    else{

        for(int i = n; i >= 1; i--){
            for(int j = m; j >= 1; j++){
                if(chomp)
            }
        }
    }    


}




int main(){

    //Inicialmente é desconhecido
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 5; j++){
            T[i][j] = -1;
        }
    }

    //Caso Base

    T[1][1] = 0; // jogador 1 perde
    
    for(int i = 2; i <= 3; i++){
        T[i][1] = 1; // jogador 1 vence
    }

    for(int j = 2; j <= 5; j++){
        T[1][j] = 1; // jogador 1 vence
    }


    chomp(3,5);

    
}

