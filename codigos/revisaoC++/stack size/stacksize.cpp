#include <sys/resource.h>
#include <stdio.h>
long long int tribonacci(int n){
    if( n <= 2){
        return 1LL;
    }else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
}

int main(){

    struct rlimit rl;
    int result;
    result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0)
    {
        printf ("\nStack Limit = %ld\n", rl.rlim_cur);
    }

    
    rl.rlim_cur = 512 * 1024 * 1024;
    result = setrlimit(RLIMIT_STACK, &rl);
    if (result != 0)
    {
        fprintf(stderr, "setrlimit returned result = %d\n", result);
    }

    result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0)
    {
        printf ("\nStack Limit = %ld\n", rl.rlim_cur);
    }

}


