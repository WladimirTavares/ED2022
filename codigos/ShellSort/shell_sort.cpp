#include <bits/stdc++.h>

#define DEBUG

#include "debug.h"

using namespace std;

bool greaterThan(int a, int b){
    cout << "comparando " << a << " " << b << endl;
    return a > b;
}

void shell_sort(vector <int> & A, int gap){
    int n = A.size();
    
    if(gap > 0){

        debug(A, gap );

        for(int i = gap; i < n; i++){
            int x = A[i];
            int j = i;


            while( j >= gap && greaterThan(A[j-gap],x) ){
                A[j] = A[j-gap];
                j = j - gap;
            }
            A[j] = x;
            debug(A, i);

        }

        shell_sort(A, gap/2);
    }
}


int main(){
    
    vector <int> A ({1,4,5,6,7,2,3,8});
    
    int n = A.size();

    shell_sort(A, n/2);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}

