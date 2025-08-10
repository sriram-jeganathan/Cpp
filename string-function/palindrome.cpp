#include <iostream>
#include <string>
using namespace std;

int main ( void ) {
    string str;
    cout << "enter any string: "; 
    getline(cin, str);
    
    int len = str.length();
    string c(len, '\0');
    int check = 0;
    for ( int i = len-1; i >= 0; i-- ) {
        c[check] = str[i];
        check++;
    }

    int comp = str.compare(c);

    if ( comp == 0 ) {
        cout << str << " is a palindrome" << endl;
    } else { 
        cout << str << " is not a palindrome" << endl;
    }
    return 0;

}
