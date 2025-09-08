#include "list.h"

List::List() {
    head = NULL;
    tail = NULL;
};

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
};

void List::append ( int x ) {
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->previous = NULL;

    if ( NULL == head ) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->previous = tail;
    tail->next = newNode;
    tail = newNode;
    return;
}

void List::print ( void ) {
    Node *current = head;
    while( NULL != current ) {
        cout << current->data << "\t";
        current = current->next;
    }
    cout << endl;
}

void List::printReverse ( void ) {
    Node *current = tail;
    while ( NULL != current ) {
        cout << current->data << "\t";
        current = current->previous;
    }
    cout << endl;
}

void List::reverse ( void ) {
    Node *current = head;
    Node *temp;
    while ( NULL != current ) {
        temp = current->next;
        current->next = current->previous;
        current->previous = temp;
        current = temp;
    }

    temp = head;
    head = tail;
    tail = temp;
    return;
}
