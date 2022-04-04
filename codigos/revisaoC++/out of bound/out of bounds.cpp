#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;




int main(){
    
  int v[15];

  v[20] = 30;
    


}


/*
=================================================================
==237846==ERROR: AddressSanitizer: stack-buffer-overflow on address 0x7ffc07c05880 at pc 0x557ac6374351 bp 0x7ffc07c05800 sp 0x7ffc07c057f0
WRITE of size 4 at 0x7ffc07c05880 thread T0
    #0 0x557ac6374350 in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/out of bound/outofbounds.cpp:24
    #1 0x7f02c8599fcf in __libc_start_call_main ../sysdeps/nptl/libc_start_call_main.h:58
    #2 0x7f02c859a07c in __libc_start_main_impl ../csu/libc-start.c:409
    #3 0x557ac63741c4 in _start (/home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/out of bound/main+0x11c4)

Address 0x7ffc07c05880 is located in stack of thread T0 at offset 112 in frame
    #0 0x557ac6374298 in main /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/out of bound/outofbounds.cpp:20

  This frame has 1 object(s):
    [32, 92) 'v' (line 22) <== Memory access at offset 112 overflows this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-buffer-overflow /home/wladimir/Disciplinas/2022.1/Estrutura de Dados/codigos/revisaoC++/out of bound/outofbounds.cpp:24 in main
Shadow bytes around the buggy address:
  0x100000f78ac0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78ad0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78ae0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78af0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b00: 00 00 f1 f1 f1 f1 00 00 00 00 00 00 00 04 f3 f3
=>0x100000f78b10:[f3]f3 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b20: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b30: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b40: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b50: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100000f78b60: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
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