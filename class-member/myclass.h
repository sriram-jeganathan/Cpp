#include <iostream>
using namespace std;

class MyClass {
private:
    //Class member as it is common for all objects/instance of MyClass
    static int count;

    //Member/Instance variable, as every instance/object of MyClass has its own variable x
    int x;
public:
    MyClass();
    ~MyClass();
};
