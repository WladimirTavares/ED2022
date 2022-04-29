#include <vector>

#define DEBUG

#include "debug.h"

using namespace std;

template <typename T>
void selection_sort(vector <T> & A, int p, int r){

    debug(A, p, r);

    if( r > p ){
        int min_idx = p;
        for(int k = p+1; k <= r; k++){
            if(A[k] < A[min_idx]) min_idx = k;
        }
        swap(A[p], A[min_idx]);
        selection_sort(A, p+1, r);
    }
}


int main(){
    
    vector <int> A ({1,4,5,6,7,2,3,8});
    
    int n = A.size();

    selection_sort(A, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}

