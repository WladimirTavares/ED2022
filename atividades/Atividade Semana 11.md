# Atividade de Laboratório

Nesta atividade, você precisa complementar a função ``Node * remove(Node *head, int val)`` que recebe o nó cabeça de uma lista encadeada `head` e um valor `val` e que devolve o nó cabeça da lista encadeada sem a presença dos nós com o valor `val`.


## Definição do nó

```C++
class Node{
    public:
    int val;
    Node * next;
    Node(int val) : val(val), next(nullptr) {};
    Node(int val, Node * next) : val(val), next(next) {};
};

//sobrecarga do operador << 
ostream& operator<<(ostream& os, Node * ptr){
    if(ptr == nullptr)
        os << "nullptr";
    else
        os << ptr->val << "," << ptr->next;
    return os;
}

```

1. Complete a função auxiliar que realiza a leitura de uma lista encadeada.

```C++
Node * readList(int n){
    if(n == 0){
        return nullptr;
    }else{
        int x;
        cout << "Entre com o elemento da lista:";
        cin >> x;
        Node * ptr = ;  
        ptr->next =  ; //chamada recursiva
        return ptr;
    }

}
```

2. Complete a função que realiza a remoção dos nós com o valor `val`de maneira iterativa

```C++
Node * remove(Node * head, int val){
    Node * prev = nullptr;
    Node * curr = head;

    while( curr != nullptr){
        if(curr->val == val){
            Node * temp = curr;
            curr = ;
            delete temp;
        }else{
            if(prev == nullptr){
                prev = ;
                head = ;
            }else{
                prev->next = ;
                prev =;
            }
            curr = curr->next;
        }
    }

    return head;

}
```

3. Complete a função que realiza a remoção dos nós com o valor `val`de maneira recursiva 


```C++
Node * remove_recursive(Node * head, int val){
    if(head == nullptr){
        return nullptr;
    }else{
        if(head->val == val){
            return ; //chamada recursiva
        }else{
            head->next = ; //chamada recursiva
            return head;
        }
    }
}

```

### main

```C++
int main(){
    Node * head;
    int n, val;

    cout << "Entre com o tamanho da lista: ";
    cin >> n;
    head = readList(n);
    cout << head << endl;
    cout << "Entre com o valor a ser removido:";
    cin >> val;
    head = remove_recursive(head, val);
    cout << head << endl;

}
```