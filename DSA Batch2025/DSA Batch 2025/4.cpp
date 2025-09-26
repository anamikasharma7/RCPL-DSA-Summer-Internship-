#include <iostream>
using namespace std;

class myQueue {
public:
    class node {
    public:
        int data;
        node* next;

        node(int val) : data(val), next(NULL) {}
    };

    node* f; // front pointer
    node* r; // rear pointer

    myQueue() { // constructor to initialize the queue
        f = r = NULL;
    }

    void push(int val) {
        node* n = new node(val);
        if (r == NULL) { 
            f = r = n;
        } else {
            r->next = n;
            r = n;
        }
    }

    void pop() {
        if (f == NULL) {
            cout << "Queue is empty!\n";
            return;
        }
        node* temp = f;
        f = f->next;

        if (f == NULL) {
            r = NULL;
        }

        delete temp;
    }

    int front() {
        if (f == NULL) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return f->data;
    }
};

int main() {
    myQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // Output: 10

    q.pop();
    cout << "Front after 1 pop: " << q.front() << endl; // Output: 20

    q.pop();
    q.pop();
    q.pop(); // Trying to pop from empty queue

    return 0;
}
   