#include <iostream>
#include "Josephus.hpp"

using namespace std;

int main(){
    int n, e;
    cout << "Entre com o numero de pessoas:";
    cin >> n;
    cout << "Entre com a posicao da pessoa que comeca com espada:";
    cin >> e;
    Josephus J(n,e);
    int x = J.survivor();
    cout << "sobrevivente: " << x << endl;
    cout << "acabou!!" << endl;
}

