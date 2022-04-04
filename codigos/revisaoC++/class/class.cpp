#include <iostream>

using namespace std;

class Set{
    private:
        int * elem;
        int size;
        int capacity;
    public:
        Set(int capacity);
        ~Set();
        void add(int x);
        void remove(int x);
        int search(int x);
        int get_size();
        friend ostream& operator<<(ostream &output, const Set & s);        
};

Set::Set(int capacity) : capacity(capacity)
{
    cout << "Construtor do Set" << endl;
    size = 0;
    elem = new int[capacity];
}

Set::~Set()
{
    cout << "destrutor do Set" << endl;
    delete [] elem;
}

int Set::search(int x)
{
    for(int i = 0; i < size; i++)
    {
        if( elem[i] == x) return i;
    }
    return -1;
}

void Set::add(int x){
    if( search(x) == -1 ){
        cout << "Adicionando " << x << endl;
        elem[size++] = x;
    }else{
        cout << x << " já está no conjunto" << endl;
    }

    cout << "tamanho " << size << endl;
}

void Set::remove(int x){
    
    int p = search(x);
    if( p != -1){
        for(int i = p; i < size; i++){
            elem[i] = elem[i+1];
        }
        size--;
        cout << "removendo " << x << " do conjunto" << endl;
    }else{
        cout << x << " nao está no conjunto" << endl;
    }
    cout << "tamanho " << size << endl;
}

int Set::get_size(){
    return size;
}

ostream& operator<<(ostream &output, const Set & s){
    
    if( s.size > 0 ){
        output << "[" << s.elem[0];
        for(int i = 1; i < s.size; i++){
            output << "," << s.elem[i];
        }
        output << "]";
    }

    return output;
}


int main(){

    Set s(10);

    s.add(4);
    s.add(3);
    s.add(4);
    s.add(5);

    cout << s << endl;

    s.remove(3);
    cout << s << endl;
    s.remove(2);
    cout << s << endl;
    s.add(7);
    cout << s << endl;

    cout << s << endl;
}


