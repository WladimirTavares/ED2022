#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printvector( vector <int> & arr, int j, int p, int r){
    cout << "[";
    for(int k = p; k <= r; k++){
        if(k == j || k == j+1) cout << "|";
        cout << arr[k] << " ";
    }
    cout << "]\n";

}

int separa(vector <int> & arr, int p, int r){
    int pivot = arr[r];
    int j = p;
    for(int k = p; k < r; k++){
        if(arr[k] <= pivot){
            swap(arr[k], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[r]);
    return j;
}




void quicksort(vector <int> & arr, int p, int r){
    if(p < r){
        cout << "p " << p << "r : " << r << endl;
        int j = separa(arr, p, r);
        printvector(arr, j, p, r);
        quicksort(arr, p, j-1);
        quicksort(arr, j+1, r);
    }   
}

void selectionsort(vector <int> & arr){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int idx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[idx]){
                idx = j;
            }
        }
        swap( arr[i], arr[idx]);
    }
}



int main()
{
    vector <int> arr({2,4,1,3,7,6,9,5});
    int n = arr.size();
    quicksort(arr, 0, n-1);
    //selectionsort(arr);
    for(auto x : arr) cout << x << " ";
    
    return 0;
}