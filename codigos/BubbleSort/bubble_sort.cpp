#include <bits/stdc++.h>

#define DEBUG

#include "debug.h"

using namespace std;

void bubble_sort(vector <int> & A, int p, int r){
    debug(A, p, r);
    if(r > p){
        int num_trocas = 0;
        for(int k = p; k <= r-1; k++){
            if(A[k] > A[k+1]){
                swap(A[k], A[k+1]);
                num_trocas++;
            }
        }
        debug(A,p,r,num_trocas);
        if( num_trocas > 0){
            bubble_sort(A, p, r-1);
        } 
    }
}


int main(){
    
    vector <int> A ({1,4,5,6,7,2,3,8});
    
    int n = A.size();

    bubble_sort(A, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}

