#include <iostream>
#include <vector>

#define DEBUG

#include "debug.h"

using namespace std;

int particiona(vector <int> & A, int start, int end);

void quicksort(vector <int> & A, int start, int end){

    if(end > start){
        int j = particiona(A, start, end);
        quicksort(A, start, j-1);
        quicksort(A, j+1, end);
        

    }
}


int particiona(vector <int> & A, int start, int end){
    int pivo = A[end];
    int j = start; // posicao que vai entrar os menores ou iguais ao pivo

    debug(A, start, end);

    for(int k = start; k <= end-1; k++){
        debug(k,j,A);
        if(A[k] <= pivo){
            swap(A[k], A[j]);
            j++;
        }
        
    }
    
    swap(A[j], A[end]);
    debug(A);
    return j;



}



int main(){

    vector <int> A ({5,6,4,3,1,3,8,5,13,11,202,22,30,-503});
    quicksort(A, 0, A.size() - 1);
}

