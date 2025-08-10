#include <iostream>
#include <string>
using namespace std;

int main ( void ) {
    string s = "Hello World";
    int len = s.length();
    string c;
    int check = 0;

    for ( int i = len-1; i >= 0; i-- ) {
        c[check] = s[i];
        cout << c[check] << "\t";
        check++;
    }
    cout << endl;
    return 0;
}
