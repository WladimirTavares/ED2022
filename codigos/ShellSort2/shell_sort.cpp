#include <bits/stdc++.h>

#define DEBUG

#include "debug.h"

using namespace std;

bool greaterThan(int a, int b){
    cout << "comparando " << a << " " << b << endl;
    return a > b;
}

void shell_sort(vector <int> & A){
    int n = A.size();
    int h = 1;
    vector <int> gaps;
    while( h < n){
        gaps.push_back(h);
        h = 3*h + 1;
    }

    reverse( gaps.begin(), gaps.end() );

    int numgaps = gaps.size();
    debug(gaps);

    for(int i = 0; i < numgaps; i++){
        int gap = gaps[i];

        debug(gap);

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

        
    }
}


int main(){
    
    vector <int> A ({1,4,5,6,7,2,3,8,12,13,7,5,3,15,14});
    
    int n = A.size();

    shell_sort(A);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}

