#include <iostream>
#include <algorithm>    // std::swap
#include <vector>

using namespace std;

typedef struct Ponto {
    int x, y;
    Ponto(int x, int y) : x(x), y(y) {}
   
} Ponto;


//sobrecarga operador << 
ostream& operator<<(ostream &output, const Ponto & p){
    output << "Ponto(" << p.x << "," << p.y << ")";
    return output;
}

typedef struct Retangulo{
    Ponto infEsq, supDir;
    Retangulo(Ponto infEsq, Ponto supDir) : infEsq {infEsq} , supDir {supDir} {} 
    int area(){
        return (supDir.x - infEsq.x) * (supDir.y - infEsq.y);
    }

} Retangulo;

//sobrecarga operador << 
ostream& operator<<(ostream &output, const Retangulo & r){
    output << "Retangulo(" << r.infEsq << "," << r.supDir << ")";
    return output;
}


int main(){

    Ponto p1 {0 , 0};
    Ponto p2(3,5);

    cout << p1 << endl;
    cout << p2 << endl;

    Retangulo r1(p1, p2);
    Retangulo r2( Ponto(2,2), Ponto(3,6) );

    cout << r1 << endl;
    cout << r1.area() << endl; 

    cout << r2 << endl;
    cout << r2.area() << endl; 
       

}

