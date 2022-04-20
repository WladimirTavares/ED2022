#include <iostream>
#include <iomanip>


using namespace std;


int main(){

    int a, i, j, n;
    
    cout << setw(10) << "n" << setw(10) << "Linha 3" << setw(10) << "Linha 5" << setw(10) << "Linha 7" << setw(10) << "Linha 9" <<endl;
        
    for(int n = 1; n <= 3; n++){
        int cont[4] = {0};
        a = 0;
        i = 1;
        while( cont[0]++, i <= n){
            j = 1;
            while( cont[1]++, j <= n){
                a = a + i + j;
                j++, cont[2]++;
            }
            i++, cont[3]++;
        }

        cout << setw(10) << n << setw(10) << cont[0] << setw(10) << cont[1] << setw(10) << 
        cont[2] << setw(10) << cont[3] << endl;
    }


}

