#include<iostream>
#include <time.h>
using namespace std;
  
constexpr long int fib(int n)
{
    return (n <= 1)? n : fib(n-1) + fib(n-2);
}

long int fib2(int n){
    return (n <= 1)? n : fib2(n-1) + fib2(n-2);
}
  
int main ()
{
    // value of res is computed at compile time. 
    clock_t start, end;
    start = clock();
    constexpr  long int res = fib(30);
    end = clock();
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    
    start = clock();
    long int res2 = fib2(30);
    end = clock();
    printf ("execution time %lf seconds.\n",((double) end-start)/CLOCKS_PER_SEC);
    

    return 0;
}

