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

    Node *current = list->head;
    while ( NULL != current ) {
        if ( current->next->data == x ) {
            Node *temp = current;
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

void deleteNode ( List *list, int number ) {
    Node *current = list->head;
    while ( current != NULL ) {
        if ( current->next->data == number ) {
            Node *temp = current;
        }
        if ( current->data == number ) {
            break;
        }
        current = current->next;
    }
    temp->next = current->next;
    current->data = 0;
    current->next = NULL;
    free(current);
    return;
}  

void mergeList ( List *list1, List *list2 ) {
    Node *current = list2->head;
    while ( NULL != current ) {
        addNode ( list1, current->data );
        current = current->next;
    }
    return; 
}

void sort ( List *list ) {
	Node *outer = list->head;
	Node *inner = list->head;
	Node *temp = malloc( sizeof(Node) );
	
	while ( NULL != outer ) {
		inner = list->head;
		while ( NULL != inner ) {
			if ( inner->number > outer->number ) {
				temp->number = inner->number;
				inner->number = outer->number;
				outer->number = temp->number;
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
}

void freeList ( List *list ) {

}
