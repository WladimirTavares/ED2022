#include <bits/stdc++.h>
using namespace std;

void countingsort(int arr[], int n, int exp)
{
	int output[n]; // output array
	int i, count[10] = { 0 };

	// Store count of occurrences in count[]
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	partial_sum( count, count + 10, count  );


	// Build the output array
	for (i = n - 1; i >= 0; i--) {
		output[--count[(arr[i] / exp) % 10]] = arr[i];
		
	}

    copy(output, output + n, arr );

	
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
	int m = *max_element(arr, arr+n);

	for (int exp = 1; m / exp > 0; exp *= 10)
		countingsort(arr, n, exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int n = sizeof(arr) / sizeof(arr[0]);
	radixsort(arr, n);
	print(arr, n);
	return 0;
}
