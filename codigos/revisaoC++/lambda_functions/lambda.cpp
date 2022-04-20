#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a = 6;

    //função lambda
    auto dobro = [](int x){ return 2*x; };

    cout << dobro(5) << endl;

    vector <int> v({1,2,3,4,5, 8, 4, 6, 3});

    auto printVector = [](vector<int> &v){
        cout << "[";
        for(auto x : v){
            cout << x <<  " ";
        }
        cout << "]" << endl;
    };

    printVector(v);

    
    int num_pares = count_if( v.begin(), v.end(), [](int x){ return x%2 == 0; });

    cout << "num pares: " << num_pares << endl;

    if( all_of(v.begin(), v.end() , [](int x){ return x%2 == 1;}) ){
        cout << "todos são ímpares " << endl;
    }

    for_each(v.begin(), v.end(), [](int & x){ x = 3*x; });

    printVector(v);

    sort( v.begin(), v.end(), [](int a, int b){ return a < b; });

    printVector(v);
 
	
    


}
