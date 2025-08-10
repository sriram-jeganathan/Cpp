#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string toUpper ( string str ) {
    int len = str.length();

    for ( int i = 0; i < len; i++ ) {
        if ( ( str[i] >= 97 ) && ( str[i] <= 122 ) ){
            str[i] = str[i] - 32;
        }
    }
    return str;
}

string sort ( string str ) {
    int len = str.length();
    char temp;

    for ( int i = 0; i < len; i++ ) {
        for ( int j = 0; j < len; j++ ) {
            if ( str[j] > str[i] ) {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }

    return str;
}

bool isAnagram ( string s1, string s2 ) {
    string str1 = toUpper ( s1 );
    string str2 = toUpper ( s2 );

    str1 = sort ( str1 );
    str2 = sort ( str2 );

    return ( str1.compare(str2) == 0 );
}

int main ( void ) {
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    
    if ( isAnagram ( s1, s2 ) ){
        cout << s1 << " is anagram of " << s2 << endl;
    } else {
        cout << s1 << " is not anagram of " << s2 << endl;
    }
    
    return 0;
    
}
