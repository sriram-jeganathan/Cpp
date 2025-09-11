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
    Node *prev = NULL;

    while ( NULL != current ) {
        if ( current->nex>t->data == x ) {
            prev = current;
        }
        if ( count == pos ) {
            break;
        }

        current = current->next;
        count++;
    }
    
    if ( count == pos ) {
        prev->next = newNode;
        newNode->previous = prev;
        newNode->next = current;
        current->previous = newNode;
    }
}


void insertTail ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;
    newNode->previous = NULL;

    list->tail->next = newNode;
    newNode->previous = list->tail;
    list->tail = newNode;
    return;
}

void searchNode ( List *list, int x ) {
    Node *current = list->head;
    int count = 0;

    while ( NULL != current ) {
        if ( current->data == x ) {
            printf ( "%d exists in the list\n", x );
            count = 1;
        }
        current = current->next;
    }
    if ( count == 0 ) {
        printf ( "%d doesnt in the list\n", count );
        return;
    }
}

int count ( List *list ) {
    Node *current = list->head;
    int count = 1;

    while ( current != NULL ) {
        count++;
        current = current->next;
    }
    return count;
}

void mergeList ( List *list1, List *list2 ) {
    Node *current = list2->head;

    while ( NULL != current ) {
        addNode ( list1, list2->data );
        current = current->next;
    }
    list->tail = current;
}


/*
void sortList ( List* );
void deleteNode ( List*, int );
void freeNode ( List* );
 */
