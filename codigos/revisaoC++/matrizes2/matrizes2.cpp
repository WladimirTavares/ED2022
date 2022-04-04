#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;


#include <iostream>
#include <algorithm>    // std::swap
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;

void preenche_matriz(int * m, int LIN, int COL){
  for(int i = 0; i < LIN;i++){
    for(int j = 0; j < COL; j++){
      m[(i*COL) + j] = (i+j);
    }
  }
}

void mostra_matriz(int * m, int LIN, int COL){
  for(int i = 0; i < LIN;i++){
    for(int j = 0; j < COL; j++){
      cout << m[(i * COL) + j] << " ";
    }
    cout << endl;
  }
}



int main() {
  constexpr int LIN = 3;
  constexpr int COL = 4;
  
  int mat[LIN][COL];

  preenche_matriz(&mat[0][0], LIN, COL);
  mostra_matriz(&mat[0][0], LIN, COL);

  int * mem = (int*)malloc(LIN*COL*sizeof(int));
  int ** mat2 = (int **) malloc(LIN*sizeof(int*));
  mat2[0] = mem;
  for(int i = 1; i < LIN; i++){
    mat2[i] = mem + COL*i;
  }

  preenche_matriz(&mat2[0][0], LIN, COL);
  mostra_matriz(&mat2[0][0], LIN, COL);


  free(mem);
  free(mat2);
  


}