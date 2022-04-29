#include <bits/stdc++.h>

#define DEBUG

#include "debug.h"

using namespace std;

void insertion_sort(vector <int> & A, int p, int r){ // A[0..p-1] está ordenado
    if( p <= r){
        int x = A[p];
        int i = p-1;
        debug(p,r,A);
        while( i >= 0 && A[i] > x){
            A[i+1] = A[i];
            debug(x,i,A);  
            i--;
        }
        assert( i < 0 || A[i] <= x );
        A[i+1] = x;
        insertion_sort(A, p+1, r);
    }
}


int main(){
    
    vector <int> A ({1,4,5,6,7,2,3,8});
    
    int n = A.size();

    insertion_sort(A, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}

