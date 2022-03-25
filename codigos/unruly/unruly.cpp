#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>

using namespace std;

void print(vector <vector<int> > board, int n, int m){

    cout << "print board" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( board[i][j] == 2){
                cout << ".";
            }else{
                cout << board[i][j] ;
            }
        }
        cout << endl;
    }

}


int rule1(vector <vector<int> > & board, int n, int m){
    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-2; j++){
            if( board[i][j] == 2){
                if(board[i][j+1] == 0 && board[i][j+2] == 0){
                    board[i][j] = 1;
                    cnt++;
                }
                if(board[i][j+1] == 1 && board[i][j+2] == 1){
                    board[i][j] = 0;
                    cnt++;
                }
            }

            if(board[i][j] == 0){
                if(board[i][j+1] == 2 && board[i][j+2] == 0){
                    board[i][j+1] = 1;
                    cnt++;
                }
            }

            if(board[i][j] == 1){
                if(board[i][j+1] == 2 && board[i][j+2] == 1){
                    board[i][j+1] = 0;
                    cnt++;
                }
            }

        }
    }

    return cnt;
}

int  rule2(vector <vector<int> > & board, int n, int m){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 2; j < m; j++){
            if( board[i][j] == 2){
                if(board[i][j-1] == 0 && board[i][j-2] == 0){
                    board[i][j] = 1;
                    cnt++;
                }
                if(board[i][j-1] == 1 && board[i][j-2] == 1){
                    board[i][j] = 0;
                    cnt++;
                }

            }
        }
    }

    return cnt;

}

int rule3(vector <vector<int> > & board, int n, int m){
    int cnt = 0;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n-2; i++){
            if( board[i][j] == 2){
                if(board[i+1][j] == 0 && board[i+2][j] == 0){
                    board[i][j] = 1;
                    cnt++;
                }
                if(board[i+1][j] == 1 && board[i+2][j] == 1){
                    board[i][j] = 0;
                    cnt++;
                }

            }

            if( board[i][j] == 1){
                if(board[i+1][j] == 2 && board[i+2][j] == 1){
                    board[i+1][j] = 0;
                    cnt++;
                }
            }

            if( board[i][j] == 0){
                if(board[i+1][j] == 2 && board[i+2][j] == 0){
                    board[i+1][j] = 1;
                    cnt++;
                }
            }



        }
    }

    return cnt;
}

int rule4(vector <vector<int> > & board, int n, int m){
    int cnt = 0;
    for(int j = 0; j < m; j++){
        for(int i = 2; i < n; i++){
            if( board[i][j] == 2){
                if(board[i-1][j] == 0 && board[i-2][j] == 0){
                    board[i][j] = 1;
                    cnt++;
                }
                if(board[i-1][j] == 1 && board[i-2][j] == 1){
                    board[i][j] = 0;
                    cnt++;
                }
            }
        }
    }
    return cnt;
}


int rule5(vector <vector<int> > & board, int n, int m){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int zeros = 0;
        int ones  = 0;

        for(int j = 0; j < m; j++){
            if( board[i][j] == 0) zeros++;
            if( board[i][j] == 1) ones++;
        }

        if(zeros == 4){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 2){
                    board[i][j] = 1;
                    cnt++;
                }
            }
        }

        if(ones == 4){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 2){
                    board[i][j] = 0;
                    cnt++;
                }
            }
        }    
    }
    return cnt;
}


int rule6(vector <vector<int> > & board, int n, int m){
    int cnt = 0;
    for(int j = 0; j < m; j++){
        int zeros = 0;
        int ones  = 0;

        for(int i = 0; i < n; i++){
            if( board[i][j] == 0) zeros++;
            if( board[i][j] == 1) ones++;
        }

        if(zeros == 4){
            for(int i = 0; i < n; i++){
                if(board[i][j] == 2){
                    board[i][j] = 1;
                    cnt++;
                }
            }
        }

        if(ones == 4){
            for(int i = 0; i < n; i++){
                if(board[i][j] == 2){
                    board[i][j] = 0;
                    cnt++;
                }
            }
        }    
    }
    return cnt;
}

void solve( vector <vector<int> > & board, int n, int m){

    int cnt = 0;

    cnt += rule1(board, n, m);
    cout << "rule1" << endl;
    print(board, n, m);

    cnt += rule2(board, n, m);
    cout << "rule2" << endl;
    print(board, n, m);
    
    cnt += rule3(board, n, m);
    cout << "rule3" << endl;
    print(board, n, m);
    

    cnt += rule4(board, n, m);
    cout << "rule4" << endl;
    print(board, n, m);
    
    cnt += rule5(board, n, m);
    cout << "rule5" << endl;
    print(board, n, m);
    
    cnt += rule6(board, n, m);
    cout << "rule6" << endl;
    print(board, n, m);
    


    cout << "fixing" << cnt << endl;

    if(cnt > 0){
        solve(board, n, m);
    }

    


}


int main(){

    int n,m;

    cin >> n >> m;

    vector < vector <int> > board;

    board.resize(n);
    for(int i = 0; i < n; i++)
        board[i].resize(m);

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 0 || board[i][j] == 1) cnt++;
        }
    }

    cout << cnt << endl;

    print(board, n, m);

    solve(board, n, m);

    //print(board, n, m);

        



}

