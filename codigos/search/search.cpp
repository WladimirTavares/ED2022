#include <bits/stdc++.h>

using namespace std;

/*
Worst-case performance	O(n)
Best-case performance	O(1)
Worst-case space complexity	O(1)
*/



template <typename T>
int linear_search(vector <T> arr, int x)
{
    int n = arr.size();
    
    int prev = 0;
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {
        prev++;
 
        // If we reached next block or end of
        // array, element is not present.
        if (prev == n)
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;
    return -1;
}



/*
Worst-case performance	O(n)
Best-case performance	O(1)
Average performance	O(log(log(n)))
Worst-case space complexity	O(1)
*/

template <typename T>
int interpolation_search( vector<T> arr, T key)
{
    int low = 0;
    int high = arr.size() - 1;
    int mid;

    while ((arr[high] != arr[low]) && (key >= arr[low]) && (key <= arr[high])) {
        mid = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (arr[mid] < key)
            low = mid + 1;
        else if (key < arr[mid])
            high = mid - 1;
        else
            return mid;
    }

    if (key == arr[low])
        return low;
    else
        return -1;
}



/*
Jump search
Worst-Case perfomance: O(sqrt(n))
Best-case performance:	O(1)

*/

template <typename T>
int jump_search(vector <T> arr, int x)
{
    int n = arr.size();
    
    // Finding block size to be jumped
    int step = sqrt(n);
 
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
 
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {
        prev++;
 
        // If we reached next block or end of
        // array, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;
 
    return -1;
}

template <typename T>
int binarySearch(vector <T> arr, int l, int r, int x)
{
    int res = -1;
    while (r >= l) {
        int mid = l + (r - l) / 2;
        
        //printf("arr[%d] = %d, arr[%d] = %d, arr[%d] =  %d\n", l, arr[l] , r, arr[r], mid, arr[mid]);
        
        if( arr[mid] >= x ){
            r = mid - 1;
            if(arr[mid] == x){
                res = mid;
            }
        }else{
            l = mid + 1;
        }        
    }
 
    return res;
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

int generate_number(int limite_inferior = 0, int limite_superior = int(1e9)){
    default_random_engine generator;
    uniform_int_distribution<int> distribution(limite_inferior, limite_superior);
    return distribution(generator);
}


int main(){

    vector <int> data = generate(1e6, 0, 1e6);
    int k = generate_number(0, 1e6);
    int n = data.size();
    
    clock_t start, end;
    
    sort( data.begin(), data.end() );

    printf("min %d max %d\n", data[0], data.back() );
    printf("k %d\n", k);

    int res = -1;


    cout << "linear_search" << endl;
    start = clock();
    res = linear_search(data, k);
    end = clock();
    printf("res = %d\n", res);
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);


    cout << "interpolation_search" << endl;
    start = clock();
    res = interpolation_search(data, k);
    end = clock();
    printf("res = %d\n", res);
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);


    cout << "jump_search" << endl;
    start = clock();
    res = jump_search(data, k);
    end = clock();
    printf("res = %d\n", res);
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);

    cout << "binary_search" << endl;
    start = clock();
    res = binarySearch(data, 0, data.size()-1, k);
    end = clock();
    printf("res = %d\n", res);
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);

    

}