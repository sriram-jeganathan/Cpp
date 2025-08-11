#include <iostream>
using namespace std;

typedef struct node{
    int data;
    node *next;
}Node;

class List {
    private:
        Node *head;
        Node *tail;
        void reversePrint( Node*, Node* );
        void reverseList( Node*, Node* );
    public:
        List();
        ~List();
        void append( int );
        void print( void );
        void printReverse( void );
        void reverse( void );
};
