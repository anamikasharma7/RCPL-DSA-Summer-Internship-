#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Stack {
private:
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) : data(val), next(NULL) {}
    };
    
    
    
    /node top;
    stack():top(NULL){} //constructor of class stack
    void push(int);
    void pop();
    int topEle();
    void display();
    void empty();*/
    
    Node* top; 

public:
    Stack() : top(NULL) {} 

   
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }