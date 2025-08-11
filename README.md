# C++
# Basics Of C++ Programming

## Data Types
In order to use a variable, the data type of the variable must be specified along with it's name.
To pass the variable in a printf statement, a format specifier must be used.
There are 5 basic data types along with it's format specifier
1. char - %c 
2. int - %d
3. float - %f
4. double - %lf
5. string - %s

---

## Logical Operators
These operators are used to specify the logic between variables and operators, with multiple conditions

- `&&` - AND:  Returns true only when both values are true  
- `||` - OR:  Returns true if any one value is true  
- `!` - NOT:  Returns true if false and false if true

---

## Printing Statements
A cout statement is used to return a formatted output to the screen
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```
Without `using namespace std` we must use `std::` before standard names like `cout`.
```
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```
To pass a variable through the cout statement, we must use the specified variable's format specifier and the variable name.
```
#include <iostream>
using namespace std;

int main() {
  int x = 81;
  cout << x << " is a square number";
  return 0;
}
```
There are special characters, each serving a different purpose.
Some basic special characters are \n, \t and more . . .
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "This is C++ program \n";
  return 0;
}
```
This can also be typed as . . .
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n";
  cout << "This is C++ program" << "\n";
  return 0;
}
```
Another way to insert a new line, is with the endl manipulator . . .
```
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "This is C++ program";
  return 0;
}
```

---

What is a class member variable?
<pre>
- class variables are static variables declared within a class.
- class variables are common for all the objects created out of that class.
- all the objects of the class share the same static variable.
- class members can be declared in public/private/protected sections within a class decleration in header files.
- static variables of a class must be initialized in the global scope within the source file ( .cpp, .c ) of the class declared in header file.
  Examples:
- When we want to find total number of objects created out of class, we can use class member
</pre>

What is a member variable?
<pre>
- In C++, member variables are declared within a class in header files.
- member variables are also called instance variables or object variables.
- every object of the class will have it's own member variables.
- Let's say we create 3 instances of the same class, when we modify a member variable from instance 1, it will not reflect in instance 2 or instance 3.
- member variables can be declared in public/private/protected sections within a class decleration in header files.
</pre>

What is a class member function?
<pre>
- class member function is a static funtion declared within a class header file.
- class member function is common for all objects of the class.
- they can be accessed using class name, scope resolution, operator followed by static member function.
- for instance, in myclass, lets say there is a static function f1 declared, it can be accessed in source file as myclass::f1()
</pre>
