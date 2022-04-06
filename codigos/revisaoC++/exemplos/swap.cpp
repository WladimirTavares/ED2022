#include <iostream>

using namespace std;

//passagem por endereço
void swap1(int *a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//passagem por referência
void swap2(int &ra, int &rb){
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main(){
    int a = 5;
    int b = 7;

    swap1(&a, &b);

    cout << a << " " << b << endl;

    swap2(a, b);

    cout << a << " " << b << endl;



  
}


