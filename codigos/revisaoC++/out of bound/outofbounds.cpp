#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;
/*
Building object files using g++ linker: memory_leak.o
g++   -c  memory_leak.cpp -o memory_leak.o -Wall -g -fsanitize=address
Finished building object file: memory_leak.o
Building target using g++ linker: main
g++  -o main memory_leak.o -Wall -g -fsanitize=address
Finished building binary: main

*/



int main(){
    
  int v[15];

  v[20] = 30;
    


}


/*
=================================================================
==237451==ERROR: LeakSanitizer: detected memory leaks

Direct leak of 10 byte(s) in 1 object(s) allocated from:
    #0 0x7f82c0591867 in __interceptor_malloc ../../../../src/libsanitizer/asan/asan_malloc_linux.cpp:145
    #1 0x55c6aca0427e in alloc() /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/memory_leak/memory_leak.cpp:20
    #2 0x55c6aca042a8 in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/memory_leak/memory_leak.cpp:28
    #3 0x7f82bffc7fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: 10 byte(s) leaked in 1 allocation(s).

*/