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



int main() {
  constexpr int LIN = 3;
  constexpr int COL = 4;
  int ** mat;
  //Alocacao
  mat = (int**)malloc(LIN*sizeof(int*));
  for(int i = 0; i < LIN; i++){
    mat[i] = (int*)malloc(COL*sizeof(int));
    cout << mat[i] << endl;
  }

  //Desalocacão
  for(int i = 0; i < LIN; i++){
    free(mat[i]);
  }
  free(mat);

  

  //Alocação
  mat = new int *[LIN];
  for(int i = 0; i < LIN; i++){
    mat[i] = new int[COL];
  }

  //Desalocação
  for(int i = 0; i < LIN; i++){
    delete [] mat[i];
  }
  delete [] mat;



}