#include "list.h"

List* createList ( void ) {
    List *list = malloc ( sizeof ( List ) );
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void addNode ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;

    if ( NULL == list->head ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    list->tail->next = newNode;
    list->tail = newNode;
    return;
}

void forwardPrint ( List *list ) {
    Node *current = list->head;

    while ( NULL != current ) {
        printf ( "%d\t", current->data );
        current = current->next;
    }
    printf ( "NULL\n" );
    return;
}

void printBackward ( Node *current, Node *previous ) {
    if ( NULL == current ) {
        return;
    }
    printBackward ( current->next, current );
    printf ( "%d\t", current->data );
}

void backwardPrint ( List *list ) {
    printBackward ( list->head, NULL );
    printf ( "NULL\n" );
    return;
}

void reverse ( Node *current, Node *previous ) {
    if ( NULL == current ) {
        return;
    }
    reverse ( current->next, current );
    current->next = previous;

}

void reverseList ( List *list ) {
    reverseList ( list->head, NULL );
    return;
}

int count ( List *list ) {
    Node *current = list->head;
    int count = 0;

    while ( NULL != current ) {
        count++;
        current = current->next;
    }

    return count;
}

void searchNode ( List *list, int number ) {
    Node *current = list->head;
    int check = 0;
    while ( current != NULL ) {
        if ( current->data == number ) {
            printf( "%d exists in List\n", number );
            check = 1;
            return 0;
        }
        current = current->next;
    }
    if ( check != 0 ) {
        printf ( "%d does not exist in List\n", number );
        return;
    }
}

void deleteNode ( List *list, int number ) {
    Node *current = list->head;
    while ( current != NULL ) {
        if ( current->data == number ) {
            break;
        }
        current = current->next;
    }
}  

void freeList ( List *list ) {

}

