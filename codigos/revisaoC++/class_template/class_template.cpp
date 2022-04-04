#include <iostream>

using namespace std;


template <class T>
class Set{
    private:
        T * elem;
        int size;
        int capacity;
    public:
        Set(int capacity);
        ~Set();
        void add(T x);
        void remove(T x);
        int search(T x);
        int get_size();
        friend ostream& operator<<(ostream &output, const Set & s){
            if( s.size > 0 ){
                output << "[" << s.elem[0];
                for(int i = 1; i < s.size; i++){
                    output << "," << s.elem[i];
                }
            output << "]";    
            }
            return output;
        }
};

template <class T>
Set<T>::Set(int capacity) : capacity(capacity)
{
    cout << "Construtor do Set" << endl;
    size = 0;
    elem = new T[capacity];
}

template <class T>
Set<T>::~Set()
{
    cout << "destrutor do Set" << endl;
    delete [] elem;
}

template <class T>
int Set<T>::search(T x)
{
    for(int i = 0; i < size; i++)
    {
        if( elem[i] == x) return i;
    }
    return -1;
}

template <class T>
void Set<T>::add(T x){
    if( search(x) == -1 ){
        cout << "Adicionando " << x << endl;
        elem[size++] = x;
    }else{
        cout << x << " já está no conjunto" << endl;
    }

    cout << "tamanho " << size << endl;
}

template <class T>
void Set<T>::remove(T x){
    
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

template <class T>
int Set<T>::get_size(){
    return size;
}

   


int main(){

    Set <int> s1(10);
    s1.add(5);
    s1.add(7);
    s1.add(8);
    cout << s1 << endl;
    
    Set <double> s2(10);
    s2.add(1.2);
    s2.add(3.4);
    s2.add(7.8);
    cout << s2 << endl;
    


}


