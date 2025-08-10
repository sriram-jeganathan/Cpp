#include <iostream>
#include <string>
using namespace std;

int main ( void ) {
    string s1 = "Hello World";
    string s2 = "Hello World";
    string s3 = "hello";
    string s4 = s3;
    char s5[12];
    
    
    // Length or size of string
    cout << "Length of string: " << s1.size() << endl;

    // Compare the strings
    cout << "Compare s1 and s2: " << s1.compare(s2) << endl;
    cout << "Compare s1 and s3: " << s1.compare(s3) << endl;

    // Concat

    cout << "Concat s4 and s3: " << s3+s4 << endl;
    cout << "Concat s4 and s3: " << s4.append(s3) << endl;

    // Replace

    cout << "Replacing s4: " << s4.replace(5, 5, " world") << endl;

    // Copying string
    s4.copy(s5, 11, 0);
    s5[11] = '\0';
    cout << "Copying s4 in s5: " << s5 << endl;

    // at()
    int x = s4.length();
    for ( int i = 0; i < x; i++ ) {
        cout << s4.at(i) << "\t";
    }
    cout << endl;
    return 0;
}
