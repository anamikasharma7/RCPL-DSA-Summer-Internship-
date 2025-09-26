//linkedlist
//malloc():malloc stand for memory allocation memory dynamically:-
//-it allocate memory in bytes
//-we have to pass number of bytes we need to allocate dynamically
//-it return null in case of fail allocate memory 
//it allocate contiguous no of blocks
//-it return void pointer so need to type cast it
//-it define inside<stdlib.h> haeder file

 #include<iostream>
using namespace std;


class node{
    public:
       int data;
       node* next;//self referential pointer
};
int main(){
    node *n1 = new node;
    n1->data = 10;
    n1->next = NULL;

    node *n2 = new node;
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;

    node *n3 = new node;
    n3->data = 30;
    n3->next = NULL;
    n3->next = n4

    node *n4 = new node;
    n4->data = 30;
    n4->next = NULL;
    

}
