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
