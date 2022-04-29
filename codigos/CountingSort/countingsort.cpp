#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
/*
Time complexity:
Worst case: O(n+k)
Average case: O(n+k)
Best case: O(n+k)
where k = max-min+1
Space complexity
Worst case: O(n+k)
*/
void coutingsort(vector <int> & A){
    int n = A.size();
    int min = *min_element(A.begin(), A.end() );
    int max = *max_element(A.begin(), A.end() );

    vector <int> contagem( max-min + 1, 0);

    for(int k = 0; k < n; k++){
        contagem[A[k] - min]++;
    }

    partial_sum( contagem.begin(), contagem.end(), contagem.begin() );

    vector <int> ordenado ( A.size() );

    for(int k = 0; k < n; k++){
        ordenado[ --contagem[A[k]-min] ] = A[k];
    }

    copy(ordenado.begin(), ordenado.end(), A.begin() );

}





int main(){

    vector <int> A ( {999,991,992,991,993,994,994,995,997,998} );

    //coutingsort(A);

    //for(auto x : A)
    //    cout << x << endl;
    //
    //return 0;
}