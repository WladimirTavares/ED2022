#include <iostream>
#include <iomanip>


using namespace std;


int main(){

    int a, i, j, n;
    
    cout << setw(10) << "n" << setw(10) << "Linha 5" <<endl;
        
    for(int n = 1; n <= 8; n = n*2){
        int cont = 0;
        a = 0;
        i = 1;
        while(  i <= n){
            j = 1;
            while( cont++, j <= n){
                a = a + i + j;
                j = j*2;
            }
            i++;
        }

        cout << setw(10) << n << setw(10) << cont <<  endl;
    }


}

