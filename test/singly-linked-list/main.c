#include "list.h"

int main ( void ) {
    List* list = createList ();
    for ( int i = 10; i < 110; i += 10 ) {
        addNode ( list, i );
    }
    forwardPrint ( list );
    return 0;
}
