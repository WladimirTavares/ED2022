#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <stdlib.h>  

using namespace std;

vector <int> pessoa;

bool conhece(int i, int j){
    if(pessoa[i] == 1){
        cout << "pessoa " << i << " nao conhece pessoa " << j << endl;
        return false;
    }else if(pessoa[j] == 1){
        cout << "pessoa " << i << " conhece pessoa " << j << endl;
        return true;
    }else{
        int res = rand() % 2;
        if(res == 0){
            cout << "pessoa " << i << " nao conhece pessoa " << j << endl;
            return false;
        }else{
            cout << "pessoa " << i << " conhece pessoa " << j << endl;
            return true;
        }
        
    }
}

int celebridade(vector <int> & candidatos){
    if( candidatos.size() == 1){
        return candidatos[0];
    }else{
        int i = candidatos[0];
        int j = candidatos[1];
        if( conhece(i,j) ){
            // i não é mais candidato
            candidatos.erase( candidatos.begin() );

            int k = celebridade(candidatos);

            if( conhece(i,k) && !conhece(k,i) )
                return k;
            else
                return -1;

        }else{
            // j não é candidato
            candidatos.erase( candidatos.begin() + 1);
            int k = celebridade(candidatos);

            if( conhece(j,k) && !conhece(k,j) )
                return k;
            else
                return -1;
        }
    }
}


int main(){

    int n;

    cout << "Entre com o numero de pessoas:";
    cin >> n;
    pessoa.assign(n, 0);
    int p = rand() % n;
    cout << "celebridade é : " << p << endl;
    pessoa[p] = 1;

    vector <int> candidatos;

    for(int i = 0; i < n; i++)
        candidatos.push_back(i);

    int k = celebridade(candidatos);


    cout << "A celebridade é " << k << endl;

    





        



}

