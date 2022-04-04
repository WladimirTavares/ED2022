#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;

/*

Informação da compilação

Building object files using g++ linker: alocacao.o
g++   -c  alocacao.cpp -o alocacao.o -Wall -g -fsanitize=address
alocacao.cpp: In function ‘int main()’:
alocacao.cpp:18:13: warning: ‘v’ may be used uninitialized [-Wmaybe-uninitialized]
   18 |     cout << v << endl;
      |             ^
In file included from /usr/include/c++/11/iostream:39,
                 from alocacao.cpp:1:
/usr/include/c++/11/ostream:245:7: note: by argument 2 of type ‘const void*’ to ‘std::basic_ostream<_CharT, _Traits>::__ostream_type& std::basic_ostream<_CharT, _Traits>::operator<<(const void*) [with _CharT = char; _Traits = std::char_traits<char>]’ declared here
  245 |       operator<<(const void* __p)
      |       ^~~~~~~~
Finished building object file: alocacao.o
Building target using g++ linker: main
g++  -o main alocacao.o -Wall -g -fsanitize=address
Finished building binary: main


*/

int main(){
    
    int * v;

    
    //criando um vetor de inteiros de tamanho 10 usando o malloc
    v = (int *)malloc(10 * sizeof(int));
    
    cout << v << endl;

    

    //criando um vetor de inteiros de tamanho 15 usando o operador new 
    v = new int[15];

    cout << v << endl;


}


/*
0x604000000010
0x606000000020

=================================================================
==236608==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 60 byte(s) in 1 object(s) allocated from:
    #0 0x7f00042c1337 in operator new[](unsigned long) ../../../../src/libsanitizer/asan/asan_new_delete.cpp:102
    #1 0x5609f0b992f4 in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/alocação de memoria/alocacao.cpp:23
    #2 0x7f0003cf5fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

Direct leak of 40 byte(s) in 1 object(s) allocated from:
    #0 0x7f00042bf867 in __interceptor_malloc ../../../../src/libsanitizer/asan/asan_malloc_linux.cpp:145
    #1 0x5609f0b992be in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/alocação de memoria/alocacao.cpp:16
    #2 0x7f0003cf5fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 100 byte(s) leaked in 2 allocation(s).


*/
