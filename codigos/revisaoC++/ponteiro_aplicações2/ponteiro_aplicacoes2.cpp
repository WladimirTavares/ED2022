#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>

using namespace std;

int f(int x){
    return 2*x;
}

int g(int x){
    return 3*x;
}

int h(int x){
    return 4*x + 5;
}


/*
Função com comportamento flexivel usando ponteiro para função
*/

void map(int * v, int n, int (*m)(int)){
    for(int i = 0; i < n; i++){
        v[i] = m(v[i]);
    }
}



void print(int * v, int n){
    cout << "[" << v[0];
    for(int i = 1; i < n; i++){
        cout << "," << v[i];
    }
    cout << "]" << endl;
}


int main(){

    int v[] = {1,2,3,4,5};
    int n = sizeof(v)/sizeof(int);

    map(v, n, h);
    
    print(v, n);




}

