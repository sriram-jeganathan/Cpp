#include "myclass.h"

int MyClass::count = 0;

MyClass::MyClass() {
        ++count;
        x = 0;
        cout << "MyClass constructor ..."<< endl;
        cout << "object " << count << endl;
        cout << "Value of x after incrementing is " << ++x << endl;
}

MyClass::~MyClass() {
        --count;
        cout << "MyClass destructor ..."<< endl;
}
