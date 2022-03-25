#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <stdlib.h>  

using namespace std;

int C(int n, int k){

    if(k == 0 || k == n)
        return 1;
    else 
        return C(n-1, k-1) + C(n-1, k);
}


int main(){

    int n, k;

    cout << "De quantas maneiras eu posso escolher k elementos entre n disponíveis.\n";

    cout << "Entre com o valor de n:" << endl;
    cin >> n;

    cout << "Entre com o valor de k:" << endl;
    cin >> k;

    cout << "C(n,k) = " << C(n,k) << endl;

    

}

