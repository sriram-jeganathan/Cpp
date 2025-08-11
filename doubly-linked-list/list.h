#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node *next;
    node *previous;
}Node;

class List {
    private:
        Node *head = NULL;
        Node *tail = NULL;
        void reverseList ( Node*, Node* );

    public:
        List();
        ~List();
        void append ( int );
        void print ( void );
        void printReverse ( void );
        void reverse ( void );
};
