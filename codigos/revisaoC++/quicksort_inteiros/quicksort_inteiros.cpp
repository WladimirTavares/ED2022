#include <iostream>
#include <algorithm>    // std::swap
#include <vector>

using namespace std;

int compara(const void *pa, const void * pb){
    if( *(int *)pa > *(int *)pb) return 1; //a vem depois de b
    else if( *(int *)pa < *(int *)pb) return -1; // a vem antes de b
    else return 0; 

}

int compara2(const void *pa, const void * pb){
    if( *(int *)pa > *(int *)pb) return -1; //a vem antes de b
    else if( *(int *)pa < *(int *)pb) return 1; // a vem depois de b
    else return 0; 

}

void print(int * v, int n){
    cout << "[" << v[0];
    for(int i = 1; i < n; i++){
        cout << "," << v[i];
    }
    cout << "]" << endl;
}

/*
void qsort (void* base, size_t num, size_t size,
            int (*compar)(const void*,const void*));
Sort elements of array
Sorts the num elements of the array pointed to by base, each element size bytes long, using the compar function to determine the order.

The sorting algorithm used by this function compares pairs of elements by calling the specified compar function with pointers to them as argument.

The function does not return any value, but modifies the content of the array pointed to by base reordering its elements as defined by compar.

The order of equivalent elements is undefined.
*/

typedef struct Data{
    int dia;
    int mes;
    int ano;

    Data(int dia, int mes, int ano) : dia(dia), mes(mes), ano(ano) {}
} Data;

//sobrecarga operador << 
ostream& operator<<(ostream &output, const Data & d){
    output << d.dia << "/" << d.mes << "/" << d.ano ;
    return output;
}

int comparaData(const void * pa, const void * pb){
    Data a = *(Data *)pa;
    Data b = *(Data *)pb;
    
    if( a.ano < b.ano ) return -1;
    else if( a.ano > b.ano) return 1;
    else if( a.mes < b.mes ) return -1;
    else if( a.mes > b.mes ) return 1;
    else if( a.dia < b.dia ) return -1;
    else if( a.dia > b.dia ) return 1;
    else return 0;

    
    
    return 0;
}



int main(){

    Data datas[] = { {8,2,1984}, {21,02,2002} , {20,03,2003} , {26,1,1995}, {11,9,2001}, {10,9,2001} };
    int num = sizeof(datas)/sizeof(Data);

    

    for(Data x : datas){
        cout << x << endl;
    }

    qsort(datas, num, sizeof(Data), comparaData);

    cout << "Data ordenadas " << endl;

    for(Data x : datas){
        cout << x << endl;
    }



    // int v[] = {4,2,3,1,8,9,10};
    // int n = sizeof(v)/sizeof(int);
    // //ordem crescente
    // qsort(v, n, sizeof(int), compara);   
    // print(v, n);
    // //ordem decrescente
    // qsort(v, n, sizeof(int), compara2);   
    // print(v, n);


}


