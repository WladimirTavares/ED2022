#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>

using namespace std;

void copiar(int * dest, int * origem, int n){

    for(int i = 0; i < n; i++){
        dest[i] = origem[i];
    }
}

/*
Usando ponteiros podemos construir funções mais genéricas
*/

void copiar_generico(void * dest, void * origem, int size, int n){

    for(int i = 0; i < n; i++){
        memcpy(dest, origem, size);
        dest = (char*)dest + size; 
        origem = (char*)origem + size;
    }
}

void print(int * v, int n){

    cout << "[" << v[0];

    for(int i = 1; i < n; i++){
        cout << ", " << v[i];
    }

    cout << "]" << endl;
}




int main(){

    int v1[] = {11,12,13,14,15};
    int v2[] = {1,2,3,4,5,6,7,8,9,10};
    int v3[] = {1,2,3,4,5,6,7,8,9,10};

    int n1 = sizeof(v1)/sizeof(int);
    int n2 = sizeof(v2)/sizeof(int);
    int n3 = sizeof(v2)/sizeof(int);
    

    copiar(v2, v1, n1);
    print(v2, n2);
    copiar(v2, v3, n3);

    copiar(v2 + 1, v1, n1);
    print(v2, n2);

    double d1[5] = {11.0,12.0,13.0,14.0,15.0};
    double d2[10] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};

    copiar_generico(d2,d1,sizeof(double),5);

    for(int i = 0; i < 10; i++)
        cout << d2[i] << endl;




}

