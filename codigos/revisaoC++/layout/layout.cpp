#include <stdio.h>
#include <stdlib.h>

char c [] = "Stored in Initialized Data Segment in read-write area";

const char s[] = "Stored in Initialized Data Segment in read-only area";



int main(){

    static int i = 11; //Initialized DSS 

    static int b; // Uninitialized DSS 

    int a; // memory allocating in stack 

    int *v; 

    v = (int*)malloc(sizeof(int)); //memory allocating in heap memory


    printf("endereço c %p\n", c);
    printf("endereço s %p\n", s);
    printf("endereço i %p\n", &i);
    printf("endereço b %p\n", &b);
    printf("endereço b %p\n", &a);
    printf("endereço v %p\n", v);
    

    


}


