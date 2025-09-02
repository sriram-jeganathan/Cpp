#include "list.h"

int main ( void ) {
    List* list = createList ();

    // adding elements to one linked list
    for ( int i = 10; i < 110; i += 10 ) {
        addNode ( list, i );
    }

    // forward printing
    printf ( "Forward Print:\n" );
    forwardPrint ( list );
    printf ( "\n" );

    // backward printing
    printf ( "Backward Print:\n" );
    backwardPrint ( list );
    printf ( "\n" );

    // reversing list
    printf ( "List Reversal:\n" );
    reverseList ( list );
    forwardPrint ( list );
    printf ( "\n" );

    // counting the number of nodes
    printf ( "Node Count:\n" );
    int size = count ( list );
    printf ( "Size of List: %d\n\n", size );

    // search the given node
    printf ( "Node Search:\n" );
    searchNode ( list, 70 );
    searchNode ( list, 15 );
    printf ( "\n" );

    // inserting head
    printf( "Head Insertion:\n" );
    insertHead ( list, 0 );
    printf ( "Head changed to 0\n");
    // inserting tail
    printf ( "Tail Insertion:\n" );
    insertTail ( list, 110 );
    printf ( "Tail changed to 110\n");
    printf ( "\n" );

    // deleting a node
    printf ( "Node Deleted:\n" );
    deleteNode ( list, 0 );
    forwardPrint ( list );
    printf ( "Node Deleted:\n" );
    deleteNode ( list, 110 );
    fowardPrint ( list );
    printf ( "\n" );

    // merging 2 lists
    List *list2 = createList ();
    for ( int i = 5; i < 110; i+=10 ) {
        addNode ( list2, i );
    }
    printf ( "List 2:\n" );
    forwardPrint ( list );
    printf ( "\n" );

    // sorting the 2 lists
    printf ( "Before sorting:\n" );
    mergeList ( list, list2 );
    forwardPrint ( list );
    printf ( "After sorting:\n" );
    sort ( list );
    forwardPrint ( list );

    return 0;
}

/*
void freeList ( List* );
*/
