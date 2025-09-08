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
The other statement to pass an out to the screen is printf statement,
A printf statement is used to return a formatted output to the screen
```
#include <stdio.h>

int main() {
  printf("This is a C Programming");
  return 0;
}
```
To pass a variable through the printf statement, we must use the specified variable's format specifier and the variable name.
```
#include <stdio.h>

int main() {
  int x = 81;
  printf( "%d", x );
  return 0;
}
```
---

# Conditional Statament
Conditional statements in C are used to control the flow of execution based on specified conditions. The conditional statements in C are if statements and switch-case statements

## If Statements
An if statement is a conditional statement used in programming to execute a block of code only if a specified condition is true.

`Syntax:`
```
if ( condition ) {
  // code block
} elseif ( condition ) {
  // code block
} else {
  // code block
}
```
We can also use elseif statements to add more conditions. Only when the first if condition fails, the elseif statement run.

`For Ex:`
```
#include <stdio.h>

int main() {
  // Declaring the variable with its value
  int x = 10;
  // to check if the number is even or odd
  if ( x % 2 == 0 ) {
    printf( "%d is even!\n ", x );
  } else {
    printf( "%d is odd!\n ", x );
  }
  return 0;
}
```
`Output:` 10 is even!

## Switch-Case Statements
Switch-case statements are also a type of conditional statement in C. They are used to execute different blocks of code based on the value of a single variable or expression. This statement works best when checking a variable against multiple constant values.

`Syntax:`
```
switch (expression) {
    case constant1:
        // code block
        break;
    case constant2:
        // code block
        break;
    ...
    default:
        // default code block
}
```
Without the use of break, execution will continue into the next case, even if a match is found. This is called fall-through and is usually not efficient or desired. Therefore, we use break to exit the switch block once a matching case has been executed.

`For Ex:`
```
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            cout << "Invalid day" << endl;
    }
    return 0;
}
```
`Output:` Wednesday

---

# Loop Statements

## For Loop
A for loop is used when a block of statements needs to be iterated a known and fixed number of times.

`Syntax:`
```
for ( initialization; condition; update ){
  // code block
}
```
`For Ex:`
```
// This program prints the first 10 natural numbers using for loop
#include <iostream>

int main() {
  for ( int i = 1; i <= 10; i++ ){
    cout << i << "\t";
  }
  return 0;
}
```
`Output:` 1   2   3   4   5   6   7   8   9   10

## While Loop

A while loop is used when a block of statements needs to be iterated an unknown number of times, depending on a condition.

`Syntax:`
```
while ( condition ) {
  // code block
}
```
`For Ex:`
```
// This program prints the first 10 natural numbers using while loop
#include <iostream>

int main() {
  int i = 1
  while ( i < 11 ) {
    cout << i << "\t";
    i++;
  }
  return 0;
}
```
`Output:` 1   2   3   4   5   6   7   8   9   10

## Do-while Loop
A do-while loop is similar to a while loop, but it checks the condition after each iteration of the loop body.

`Syntax:`
```
do {
    // Code block
} while (condition);
```
Use a do-while loop when you want the code inside the loop to execute at least once, regardless of whether the condition is true or false initially.

`For Ex:`
```
#include <iostream>

int main() {
    int i = 10;
    do {
        cout << i << " is not less than 5!";
    } while (i < 5);  // Condition is false
    return 0;
}
```
`Output:` 10 is not less than 5!

---

# Jump Statements

Jump statements are used to change the flow of control by transferring execution to a different part of the program.
In C++ programming, `break`, `continue`, `return`, and `goto` are classified as jump statements.

## Break Statement
The `break` statement is often used inside a loop. It immediately terminates the current loop and transfers control to the first statement after the loop. 

`For Ex:`
```
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3)
            break;  // exits the loop when i is 3
        cout << i << "\t";
    }
    return 0;
}
```
`Output:` 1  2

## Continue Statement
The `continue` statement is also often used inside a loop. It skips the remaining statements in the current iteration and proceeds directly to the next iteration of the loop. 

`For Ex:`
```
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3)
            continue;  // skips printing 3
        cout << i << "\t";
    }
    return 0;
}
```
`Output:` 1  2  4  5

## Return Statement
The `return` statement is used to exit from a function. It immediately terminates the function's execution and optionally sends a value back to the calling function.

`For Ex:`
```
#include <iostream>

int square(int n) {
    return n * n;  // exits the function and returns the result
}

int main() {
    int result = square(4);
    cout << "Square = " << result << endl;
    return 0;
}
```
`Output:` Square = 16!


## Goto Statement
The `goto` statement is used to transfer control unconditionally to a labeled statement within the same function. It allows the program to jump to a specific part of the code, bypassing normal control flow.

`For Ex:`
```
#include <iostream>

int main() {
    int x = 1;
    if (x == 1)
        goto skip;
    cout << "This line is skipped << endl;
skip:
    cout <<"Jumped to the label" << endl;
    return 0;
}
```
`Output:` Jumped to the label.

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
