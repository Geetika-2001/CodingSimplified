#include<bits/stdc++.h>
using namespace std;

template<typename T>
class QueueUsingArray {

    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(T ArraySize) {
        data = new T[ArraySize];
        nextIndex=0;
        firstIndex=-1;
        size = 0;
        capacity = ArraySize;
    }

    int getSize() {
        return size;
    }

    /* Insert Element */
    void enqeue(T element) {
        if(size == capacity) {
            cout << "queue is Full !!" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex= (nextIndex+1) % capacity;
        if(firstIndex == -1) {
            firstIndex = 0;
        }
        size++;
    }

    T front() {
        if(isEmpty()) {
            cout << "Queue is empty !!" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    T dequeue() {
        if(isEmpty()) {
            cout << "Queue is empty !!" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex +1) % capacity;
        size--;
        // Not necessary but good if implemented : 
        if(size == 0) {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }

    bool isEmpty() {
        return size == 0;
    }

};

int main() {
    QueueUsingArray<int> a(12);
    a.enqeue(15);
    a.enqeue(30);
    a.enqeue(45);
    a.enqeue(60);
    a.enqeue(75);
    cout << a.front() << endl;
    cout << a.dequeue() << endl;
    cout << a.dequeue() << endl;
    cout << a.dequeue() << endl;
    cout << a.getSize() << endl;
    cout << a.isEmpty() << endl;
}
