#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;



int main(){
    
    int * v;

    //criando um vetor de inteiros de tamanho 10 usando o malloc
    v = (int *)malloc(10 * sizeof(int));

    v[10] = 8;    

    


}


/*
==237129==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x604000000038 at pc 0x55ff540d92c2 bp 0x7ffc9d8ae9a0 sp 0x7ffc9d8ae990
WRITE of size 4 at 0x604000000038 thread T0
    #0 0x55ff540d92c1 in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/buffer overrun/buffer_over_run.cpp:18
    #1 0x7fe886db8fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #2 0x7fe886db907c in __libc_start_main_impl ../csu/libc-start.c:409
    #3 0x55ff540d91a4 in _start (/home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/buffer overrun/main+0x11a4)

0x604000000038 is located 0 bytes to the right of 40-byte region [0x604000000010,0x604000000038)
allocated by thread T0 here:
    #0 0x7fe887382867 in __interceptor_malloc ../../../../src/libsanitizer/asan/asan_malloc_linux.cpp:145
    #1 0x55ff540d927e in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/buffer overrun/buffer_over_run.cpp:16
    #2 0x7fe886db8fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58

SUMMARY: AddressSanitizer: heap-buffer-overflow /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/buffer overrun/buffer_over_run.cpp:18 in main
Shadow bytes around the buggy address:
  0x0c087fff7fb0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c087fff7fc0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c087fff7fd0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c087fff7fe0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x0c087fff7ff0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x0c087fff8000: fa fa 00 00 00 00 00[fa]fa fa fa fa fa fa fa fa
  0x0c087fff8010: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c087fff8020: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c087fff8030: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c087fff8040: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x0c087fff8050: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07 
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc

*/