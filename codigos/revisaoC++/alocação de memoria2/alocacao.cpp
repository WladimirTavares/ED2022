#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){
    
    int * v;

    
    //criando um vetor de inteiros de tamanho 10 usando o malloc
    v = (int *)malloc(10 * sizeof(int));
    
    cout << v << endl;

    delete [] v;
   

    //criando um vetor de inteiros de tamanho 15 usando o operador new 
    v = new int[15];

    cout << v << endl;

    free(v);
    
}

