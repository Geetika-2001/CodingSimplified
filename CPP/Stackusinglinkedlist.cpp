#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
    public :
    T data;
    Node<T> *next;

    Node(T data) {
        this -> data = data;
        next = NULL;
    }

};

template<typename T>
class StackUsingLL{
    Node<T> *head;
    int size;

    public :
    StackUsingLL(){
        head = NULL;
        size = 0;
    }

    void push(T element) {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    } 

    T top() {
        if(isEmpty()) {
            return 0;
        }
        return head->data;
    }

    T pop() {
        if(isEmpty()) {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    bool isEmpty() {
        return size==0;
    }

    int getSize() {
        return size;
    }

};

int main() {
    StackUsingLL<int> a;
    a.push(12);
    a.push(133);
    cout << a.top() << endl;
}
