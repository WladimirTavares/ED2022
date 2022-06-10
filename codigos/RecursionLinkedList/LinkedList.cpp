#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>

using namespace std;

template <typename T>
class ListNode {
    public:
    T val;
    ListNode *next;
    ListNode() : val( T()  ), next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode *next) : val(x), next(next) {} 
};

 
template <typename T>
ListNode<T> * insert_front(ListNode<T> * head, T val)
{
       return new ListNode<T>(val, head);

}

template <typename T>
ListNode<T> * insert_back(ListNode<T> * head, T val)
{
    if(head == nullptr){
        return new ListNode<T>(val, nullptr);
    }else{
        ListNode<T> * ptr = head;

        while( ptr->next != nullptr){
            ptr = ptr->next;
        }

        ptr->next = new ListNode<T>(val, nullptr);

        return head;
    }
}


template <typename T>
ListNode<T> * insert_back2(ListNode<T> * head, T val)
{
    if(head == nullptr){
        return new ListNode<T>(val, nullptr);
    }else{
        head->next = insert_back2(head->next, val);
        return head;
    }
}




template <typename T> 
int sizeList(ListNode <T> * head){
    
    if(head == nullptr)
        return 0;
    else
        return 1 + sizeList(head->next);

}




//head != nullptr
template <typename T> 
T last(ListNode<T> * head)
{
    if(head->next == nullptr){
        return head->val;
    }else{
        return last(head->next);
    }    

}

// sizeList(head) > k
template <typename T> 
T kthElement(ListNode<T> * head, int k)
{
    if(k == 0){
        return head->val;
    }else{
        return kthElement(head->next, k-1);
    }

}

template <typename T>
ListNode<T> * insert_index(ListNode<T> * head, T val, int k)
{
    if(head == nullptr){
        return new ListNode<T>(val, nullptr);
    }else if( k == 0){
        return insert_front(head, val);
    }else{
        head->next = insert_index(head->next, val, k-1);
        return head;
    }
}






template <typename T> 
ListNode <T> * reverseList(ListNode <T> * head){

    if(head == nullptr) // tamanho 0
        return head;
    else if(head->next == nullptr) // tamanho 1
        return head;
    else{
        ListNode <T> * ptr;
        int valor = head->val;
        ptr = reverseList(head->next);
        delete head;
        return insert_back(ptr, valor);
    }
}

template <typename T> 
ListNode <T> * reverseList2(ListNode <T> * head){

    if(head == nullptr) // tamanho 0
        return head;
    else if(head->next == nullptr) // tamanho 1
        return head;
    else{
        ListNode <T> * ptr;
        int valor = head->val;
        ptr = reverseList(head->next);
        delete head;
        return insert_back(ptr, valor);
    }
}

int sumList(ListNode<int> * head)
{
    if(head == nullptr)
        return 0;
    else
        return sumList(head->next) + head->val;

}


template <typename T>
T middle(ListNode<T> *head)
{
    int n = sizeList(head);
    return kthElement(head, n/2);
}

// sizeList(head) > 3
template <typename T>
T meio(ListNode<T> *head)
{
    ListNode<T> * slow = head;
    ListNode<T> * fast = slow->next->next;

    while( fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
    }

    return slow->next->val;
    
}



template <typename T> 
ListNode<T> * reverseListInPlace(ListNode<T> * head){
    ListNode<T> * ant = nullptr;
    ListNode<T> * atual = head;
    ListNode<T> * prox = nullptr;

    while( atual != nullptr){
        prox = atual->next;
        atual->next = ant;
        ant = atual;
        atual = prox;
    }

    return ant;
}


template <typename T> 
ListNode<T> * reverseList(ListNode<T> * head)
{
    if(head == nullptr)
        return nullptr;
    else if(head->next == nullptr){
        return new ListNode<T>(head->val, nullptr);
    }else{
        ListNode<T> * ptr = reverseList(head->next);
        insert_back(ptr, head->val);
        return ptr;
    }

}








template <typename T>
bool isOrdered(ListNode<T> * head)
{
    if(head == nullptr) // tamanho 0
        return true;
    else if(head->next == nullptr){ // tamanho 1
        return true;
    }else{
        if( head->val <= head->next->val ){
            return isOrdered(head->next);    
        }else{
            return false;
        }
    }


}






template <typename T>
ListNode<T> * remove_front(ListNode<T> * head)
{
    ListNode<T> * ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

template <typename T>
ostream& operator<<(ostream& os, ListNode<T> * ptr){
    if(ptr == nullptr)
        os << "nullptr";
    else
        os << ptr->val << "," << ptr->next;
    return os;
}



int main(){
    
    ListNode<int> * head = nullptr;
    head = insert_back(head, 2);
    head = insert_back(head, 1);
    head = insert_back(head, 8);
    head = insert_back(head, 5);
    
    
    cout << head << endl;

    cout << middle(head) << endl;

    cout << meio(head) << endl;
    
    
   

    cout << sizeList(head) << endl;

    cout << last(head) << endl;

    cout << sumList(head) << endl;

    cout << isOrdered(head) << endl;

    cout << head << endl;

    head = reverseList(head);

    cout << head << endl;

    // head = insert_back(head, 5);
    // head = insert_back(head, 6);
    // head = insert_back(head, 7);
    // head = insert_front(head,8);

    // cout << head << endl;

    // cout << sizeList(head) << endl;
    // cout << sizeList2(head) << endl;
    
    // cout << last(head) << endl;

    
     

    //ListNode<int> * head2 = mapList<int,int>(head, dobro ); 
    
    //print_list(head2);


    //int n; cin >> n;

    //auto head2 = take(head, n);

    

    //auto head2 = runLengthEnconding(head);

    //cout << sumList(head) << endl;

    



    //cout << getNthFromLast(head, 1) << endl;

    //cout << isOrdered(head) << endl;

    
   
    //ListNode<int> * head2 = filterList<int>(head1, [](int x)-> bool {return x%2==0; } );    
   
    
    //print_list(head2);


}

