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
    reverse ( list->head, NULL );
    Node *temp = list->head;
    list->head = list->tail;
    list->tail = temp;
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
            return;
        }
        current = current->next;
    }
    if ( check != 0 ) {
        printf ( "%d does not exist in List\n", number );
        return;
    }
}

void insertHead ( List *list, int x ) {
    Node *newNode  = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;

    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    newNode->next = list->head;
    list->head = newNode;
    return;
}

void insertMiddle ( List *list, int pos, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;
    int count = 0;
    Node *temp = NULL;

    Node *current = list->head;
    while ( NULL != current ) {
        if ( current->next->data == x ) {
            temp = current;
        }
        if ( count == pos ) {
            break;
        }
        current = current->next;
        count++;
    }

    
    temp->next = newNode;
    newNode->next = current;
    return;
}

void insertTail ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;

    list->tail->next = newNode;
    list->tail = newNode;
    return;
}

void deleteNode(List *list, int number) {
    if (list->head == NULL) {
        return;
    }

    Node *current = list->head;
    Node *prev = NULL;

    while (current != NULL && current->data != number) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return; 
    }

    if (prev == NULL) {
        list->head = current->next;
        if (current == list->tail) {
            list->tail = NULL; 
        }
    } else {
        prev->next = current->next;
        if (current == list->tail) {
            list->tail = prev; 
        }
    }

    free(current);
}

void mergeList(List *list1, List *list2) {
    if (list1->head == NULL) {
        list1->head = list2->head;
    } else {
        Node *current = list1->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = list2->head;
    }
    list2->head = NULL;
}

List* breakMiddle ( List *list, int x ) {
    Node *current = list->head;
    int count = 0;
    while ( NULL != current ) {

    }
}

void sort(List *list) {
    for (Node *outer = list->head; outer != NULL; outer = outer->next) {
        for (Node *inner = outer->next; inner != NULL; inner = inner->next) {
            if (inner->data < outer->data) {
                int temp = inner->data;
                inner->data = outer->data;
                outer->data = temp;
            }
        }
    }
}
void freeList(List *list) {
    Node *current = list->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next; 
        free(temp);
    }

    free(list);
}
