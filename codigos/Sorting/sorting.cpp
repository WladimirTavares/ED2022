#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

//#define DEBUG

#define all(c) c.begin(), c.end()
#ifdef DEBUG
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*
A = {4,3,5,2}, p = 0, r = 3
A = {2,3,5,4}, p = 0, r = 3
A = {2,3,5,4}, p = 1, r = 3
A = {2,3,4,5}, p = 2, r = 3
A = {2,3,4,5}, p = 3, r = 3
*/

void selection_sort(vector <int> & A, int p, int r){
    debug(A, p, r);
    if( p < r){
        int min_idx = p;
        for(int k = p+1; k <= r; k++){
            if(A[k] < A[min_idx]) min_idx = k;
        }
        swap(A[p], A[min_idx]);
        selection_sort(A, p+1, r);
    }
}

void selection_sort2(vector <int> & A){
    int n = A.size();
    for(int  p = 0; p < n; p++){ //posicao do elemento
        int min_idx = p;    
        for(int k = p+1; k <= n-1; k++){
            if( A[k] < A[min_idx] ){
                min_idx = k;
            }
        }
        swap(A[p], A[min_idx]);
    }
}

/*
A = {4,3,5,2}, p = 0, r = 3
A = {4,3,5,2}, num_trocas = 0
A = {3,4,5,2}, num_trocas = 1
A = {3,4,2,5}, num_trocas = 2
A = {3,4,2}, p = 0, r = 2
A = {3,4,2}, num_trocas = 0
A = {3,2,4}, num_trocas = 1
A = {3,2} p = 0, r = 1
A = {3,2} num_trocas = 0
A = {2,3} num_trocas = 1
A = {2} p = 0, r = 0



*/

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

void bubble_sort2(vector <int> & A, int p, int r){
    for(int i = r-1; i >= 1; i--){ //ao final da iteração i, o A[i] é o maior do vetor A[0..i] 
        int num_trocas = 0;
        for(int k = p; k <= i-1; k++){
            if(A[k] > A[k+1]){
                swap(A[k], A[k+1]);
                num_trocas++;
            }
        }
        if( num_trocas == 0 ) break;
    }
}



/*
A = {[4],3,5,2}, p = 0, r = 3
x = 4
i = -1
A[0] = x
A = {4,3,5,2}, p = 1, r = 3
x = 3, i = 0, A = {4,3,5,2}
x = 3, i = -1, A = {4,4,5,2}
A = {[3,4],5,2}, p = 2, r = 3
x = 5, i = 1, A = {3,4,5,2}
A = {[3,4,5],2}, p = 3, r = 3
x = 2, i = 2, A = {3,4,5,5}
x = 2, i = 1, A = {3,4,4,5}
x = 2, i = 0, A = {3,3,4,5}
x = 2, i = -1, A = {2,3,4,5}

*/

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

/*
A = {4,3,5,2,4,3}

contagem[i] = #vezes que o valor i aparece no vetor A

index    : 0 1 2 3 4 5
contagem : 0 0 0 0 0 0 
contagem : 0 0 0 0 1 0
contagem : 0 0 0 1 1 0
contagem : 0 0 0 1 1 1
contagem : 0 0 1 1 1 1
contagem : 0 0 1 1 2 1
contagem : 0 0 1 2 2 1

contagem : 0 0 1 2 2 1
contagem : 0
contagem : 0 0
contagem : 0 0 1
contagem : 0 0 1 3
contagem : 0 0 1 3 5
contagem : 0 0 1 3 5 6

index    : 0   1 2 3 4 5
contagem : -1 -1 -1 1 2 4

A = {4,3,5,2,4,3}

index    : 0 1 2 3 4 5
ordenado : 2 3 3 4 4 5 






3,4,5
index    : 0 1 2 3 4 5
contagem : 0 0 0 1 1 1

max = 5
min = 3
max-min+1 = 5-3+1 = 3
           min  min+1 min+2
index    : 0    1      2  
contagem : 0    0      0 




*/


void counting_sort(vector <int> & A){
    int min = *min_element(all(A));
    int max = *max_element(all(A));
    int n;
    vector <int> contagem(max-min+1, 0);
    
    for(auto x : A){
        contagem[x-min]++;
    }

    debug(A);
    debug(contagem);    

    n = contagem.size();
    for(int i = 1; i < n; i++)
        contagem[i] += contagem[i-1];

    debug(contagem);

    vector <int> output (A.size() );

    for(auto it = A.rbegin(); it != A.rend(); it++){
        output[ --contagem[*it-min] ] = *it;
    }

    copy(all(output), A.begin() );


    //debug(contagem);    



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


            while( j >= gap && A[j-gap] > x ){
                A[j] = A[j-gap];
                j = j - gap;
            }
            A[j] = x;
            debug(A, i);

        }

        
    }
}


/*
arr = [5,3,7,1,4]
separa p = 0, r = 4
arr = [[5],3,7,1,4], j = 0, pivot = 4
arr = [5,[3],7,1,4], j = 0, pivot = 4
arr = [3,5,[7],1,4], j = 1, pivot = 4
arr = [3,5,7,[1],4], j = 1, pivot = 4
arr = [3,1,7,5,4], j = 2, pivot = 4
arr = [[3,1],4,[5,7]], j = 2, pivot = 4



*/
/*
arr = [5,3,7,1,4], p = 0, r = 4
separa
arr = [[5],3,7,1,4], j = 0, pivot = 4
arr = [5,[3],7,1,4], j = 0, pivot = 4
arr = [3,[5],7,1,4], j = 1, pivot = 4
arr = [3,5,[7],1,4], j = 1, pivot = 4
arr = [3,1,7,[5],4], j = 2, pivot = 4
arr = [3,1,4,5,7]
j =  2

arr = [[3,1],4,5,7], p = 0, r = 1
separa
arr = [[3],1,4,5,7], j = 0, pivot = 1
arr = [1,3,4,5,7]
j = 0

arr = [1,3,4,5,7], p = 0, r = j-1 = -1 // não faz nada
arr = [1,3,4,5,7], p = j+1 = 1, r = 1 // não faz nada

arr = [[1,3],[4],5,7]


arr = [3,1,4,5,7], p = 3, r = 4
separa
arr = [3,1,4,[5],7], j =  3, pivot = 7
arr = [3,1,4,5,7], j =  4, pivot = 7

arr = [3,1,4,5,7]
j = 4

arr = [1,3,4,5,7], p = 3, r = j-1 = 3 // não faz nada
arr = [1,3,4,5,7], p = j+1 = 5, r = 4 // não faz nada


*/

int separa(vector <int> & arr, int p, int r){
    int pivot = arr[r];
    int j = p;

    //debug(arr, p, r);
    for(int k = p; k < r; k++){
        if(arr[k] <= pivot){
            swap(arr[k], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[r]);
    debug(arr, p, r, j);
    return j;
}
//    p  r
//arr[0..0]
//arr[0..1]

//p = 0, r = 1, j = 0
// [0,j-1] e [1,r]

void quicksort(vector <int> & arr, int p, int r){
    debug(arr, p, r);
    if(p < r){ // vetor de tamanho pelo menos 2       
        int j = separa(arr, p, r);
        quicksort(arr, p, j-1); 
        quicksort(arr, j+1, r); 
    }   
}


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




bool is_ordered(vector <int> & A, int n){
    if(n <= 1){
        return true;
    }else{
        return A[n-1] >= A[n-2] && is_ordered(A, n-1);
    }
}

vector <int> generate(int size, int limite_inferior = 0, int limite_superior = (int)1e9){
    vector <int> output;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(limite_inferior, limite_superior);

    output.resize(size);
    for(int i = 0; i < size; i++){
        output[i] = distribution(generator);
    }
    return output;
}



/*
selection sort O(n^2)
bubble sort O(n^2)
insertion sort O(n^2)
counting sort O( n + k ) onde k é o tamanho do intervalo que os números variam.
*/





int main(){

    clock_t start, end;
    
    vector <int> data = generate(100000, 0, 1000000);
    //vector <int> data({5,3,7,1,4,2,2,0,0,3,1});
    int n = data.size();


    cout << "bubble_sort" << endl;
    vector <int> A(data);
    start = clock();
    bubble_sort(A, 0, n-1);
    end = clock();
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
   
    cout << "shell_sort" << endl;
    vector <int> B(data);
    start = clock();
    shell_sort(B);
    end = clock();
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
   
    



    // vector <int> A(data);
    // cout << "selection_sort" << endl;
    // start = clock();
    // selection_sort(A, 0, n-1);
    // end = clock();
    // printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    // //for_each(A.begin(), A.end(), [](int x) { cout << x << " ";} );
    // //cout << endl;
    // assert( is_ordered(A, n) );

        
    


 
    


    
    
    
    

    // cout << "insertion_sort" << endl;
    // vector <int> C(data);
    // start = clock();
    // insertion_sort(C, 0, n-1);
    // end = clock();
    // printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
   
    // assert( is_ordered(C, n) );

    

    cout << "counting_sort" << endl;
    vector <int> D(data);
    start = clock();
    counting_sort(D);
    end = clock();
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    
    assert( is_ordered(D, n) );

   


    // cout << "quicksort" << endl;
    // vector <int> E(data);
    // start = clock();
    // quicksort(E, 0, n-1);
    // end = clock();
    // printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    
    // assert( is_ordered(E, n) );

    

    // cout << "mergesort" << endl;
    // vector <int> F(data);
    // start = clock();
    // mergesort(F, 0, n-1);
    // end = clock();
    // printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    
    // assert( is_ordered(F, n) );

    


    
}

