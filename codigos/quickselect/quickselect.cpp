#include <iostream>
#include <vector>

#define DEBUG

#include "debug.h"

using namespace std;

int particiona(vector <int> & A, int start, int end);

int quickselect(vector <int> & A, int k, int start, int end){
    debug(A, k, start, end);
    if(end > start){
        int j = particiona(A, start, end);
        //debug(j - k , start);
        if( j == k  )
            return A[j];
        else if( k < j  ){
            return quickselect(A,k , start, j-1);
        }else if( k > j  ){
            return quickselect(A,k , j+1, end);
        }
    }else if( start == end ){
        return A[start];
    }



    return -1;
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
    cout << quickselect(A, 4, 0, A.size() - 1);
}

