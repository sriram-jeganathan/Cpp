#include "list.h"

int main ( void ) {
    List *list1 = createList ( );
    for ( int i = 10; i < 60; i += 10 ) {
        addNode ( list1, i );
    }
    // forward printing
    printf ( "Forward Printing\n" );
    forwardPrint ( list1 );
    printf ( "\n" );

    // backward printing
    printf ( "Backward Printing\n" );
    backwardPrint ( list1 );
    printf ( "\n" );
    return 0;
}
