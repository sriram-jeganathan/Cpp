#include "list.h"

List* createList ( void ) {
    List* list = malloc ( sizeof ( List ) );
    return list;
}

Node* createNode ( int x ) {
    Node* newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;
    newNode->previous = NULL;
    return newNode;
}

void addNode ( List *list, int x ) {
    Node *newNode = createNode ( x ); 

    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }
    
    list->tail->next = newNode;
    newNode->previous = list->tail;
    list->tail = newNode;
    return;
}

void forwardPrint ( List *list ) {
    Node *current = list->head;

    while ( current != NULL ) {
        printf ( "%d\t", current->data );
        current = current->next;
    }

    printf ( "NULL\n" );
    return;
}

void backwardPrint ( List *list ) {
    Node *current = list->tail;

    while ( current != NULL ) {
        printf ( "%d\t", current->data );
        current = current->previous;
    }

    printf ( "NULL\n" );
    return;
}

void insertHead ( List *list, int x ) {
    Node *newNode = createNode ( x ); 

    list->head->previous = newNode;
    newNode->next = list->head;
    list->head = newNode;
    return;
}

void insertMiddle ( List *list, int pos, int x ) {
    Node *newNode = createNode ( x ); 
    int count = 1;
    Node *current = list->head;

    while ( NULL != current ) {
        if ( current->next->data 
        if ( count == pos ) {
            break;
        }

        current = current->next;
        count++;
    }
    
    if ( count == pos ) {
        // write code here
    } else {
        printf ( "%d does not exist in List", x );
    }


}

/*
Node* createNode ( void );
void insertMiddle ( List*, int, int );
void insertTail ( List*, int );
void searchNode ( List*, int );
int count ( List* );
void mergeList ( List*, List* );
void sortList ( List* );
void deleteNode ( List*, int );
void freeNode ( List* );
 */
