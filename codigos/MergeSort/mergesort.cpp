#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); 
cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), 
__print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)


using namespace std;


void merge(vector <int> & A, int p, int q, int r){
    vector <int> W;
    W.resize(r-p+1);
    int i = p;
    int j = q+1;
    int k = 0;
    while( i <= q && j <= r){
        if(A[i] <= A[j]){
            W[k++] = A[i++];
        }else{
            W[k++] = A[j++];
        }
    }
    while( i <= q ) W[k++] = A[i++];
    while( j <= r ) W[k++] = A[j++];
    for(int i = p; i <= r; i++){
        A[i] = W[i-p];
    } 
}

void mergesort(vector <int> & A, int p, int r){
    if( p < r){
        int q = (p+r)/2;
        mergesort(A, p, q);
        mergesort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int main(){
    vector <int> A ({1,4,5,6,7,2,3,8});
    int n = A.size();
    mergesort(A, 0 , n-1);

    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}