#include "list.h"

int main ( void ) {
    List list;
    for ( int i = 10; i < 110; i+=10 ) {
        list.append ( i );
    }
    list.print();
    list.printReverse();
    list.reverse();
    cout << "Reversed" << endl;
    list.print();
    list.printReverse();
    
    return 0;
}
