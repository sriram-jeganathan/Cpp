#include "list.h"

List::List() {
    head = NULL;
    tail = NULL;
}

List::~List() {
    if ( NULL == head ) {
        return;
    }
    Node *current = head;
    while ( NULL != current ) {
        head = current->next;
        delete(current);
        current = head;
    }
    head = NULL;
    tail = NULL;
}

void List::append( int x ) {
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if ( NULL == head ) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}

void List::print() {
    Node *current = head;
    
    cout << "List elements are: " << endl;
    while ( NULL != current ) {
        cout << current->data << "\t";
        current = current->next;
    }
    cout << endl;
    return;
}

void List::reversePrint( Node *current, Node *previous ) {
    if ( NULL == current ) {
        return;
    }
    reversePrint ( current->next, current );

    cout << current->data << "\t";
}

void List::printReverse() {
    Node *current = head;
    cout << "List elements in reverse: " << endl;
    reversePrint( current, NULL );
    cout << endl;
    return;
}

void List::reverseList( Node *current, Node *previous ) {
    if ( NULL == current ) {
        return;
    }
    reverseList ( current->next, current );
    current->next = previous;
}

void List::reverse() {
    Node *current = head;
    reverseList(current,NULL);
    Node *temp = head;
    head = tail;
    tail = temp;
    cout << "List reversed!" << endl;
    return;
}
