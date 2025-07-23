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

## Arithmetic Operators
The arithmetic operators in C, listed by their precedence from highest to lowest, are:

`* → / → % → + → - → ++ → --`

---

## Logical Operators
These operators are used to specify the logic between variables and operators, with multiple conditions

- `&&` - AND:  Returns true only when both values are true  
- `||` - OR:  Returns true if any one value is true  
- `!` - NOT:  Returns true if false and false if true

---

## Bitwise Operators
- '&' - AND:  Returns true only when both bits are true
- '|' - OR:  Returns true if any one bit is true  
- '^' - XOR:  Returns 1 if both bits are different
- '~' - NOT:  Returns true if false and false if true
- '<<' - LEFT SHIFT:  left shifts bits of 1st operand and 2nd operand decides number of places to shift
- '>>' - RIGHT SHIFT:  right shifts bits of 1st operand and 2nd operand decides number of places to shift

**NOTE:** 
* left shift formula: a x ( 2^n )
* right shift formula: a / ( 2^n )
this is only for checking and calculating purpose

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
  cout << "%d is a square number" << x;
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
