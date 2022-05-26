#include <iostream>
#include <vector>

#define DEBUG

#include "debug.h"

using namespace std;

int merge(vector <int> & A, int start, int mid, int end){
    //Criei o meu vetor auxiliar
    vector <int> B;
    B.resize(end-start + 1);
    
    int start1 = start;
    int start2 = mid+1;
    int start3 = 0;

    //debug(A, B, start1, start2, start3);

    while( start1 <= mid && start2 <= end){
        if(A[start1] <= A[start2]){
            B[start3++] = A[start1++];
        }else{
            B[start3++] = A[start2++];
        }

        //debug(A,  B, start1, start2, start3);
    }

    while( start1 <= mid ){
        B[start3++] = A[start1++];
        //debug(A,  B, start1, start2, start3);
    }

    while( start2 <= end ){
        B[start3++] = A[start2++];
        //debug(A,  B, start1, start2, start3);
    }

    for(int i = start, j = 0; i <= end; i++, j++){
        A[i] = B[j];
    }
}

int mergesort(vector <int> & A, int start, int end ){
    if(end > start){
        int mid = (start + end)/2;
        int p1 = mergesort(A, start, mid);
        int p2 = mergesort(A, mid+1, end);
        int p3 = merge(A, start, mid, end );
        return p1 + p2 + p3;
    }

}


int main(){

    vector <int> A ({5,6,4,3,1,3,8,5,9});
    mergesort(A, 0, A.size() - 1);
}

