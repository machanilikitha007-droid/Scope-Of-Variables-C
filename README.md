# Scope of Variables in C

This program demonstrates the scope of global and local variables.
A global variable can be accessed by different functions, while a local
variable is available only inside the function where it is declared.

## File

variable_scope.c

## Concepts Used

- Global variable
- Local variable
- Variable scope
- Function

## How to Run

gcc variable_scope.c -o variable_scope
./variable_scope

## Sample Output

Inside main:
Global Value = 100
Local Value = 20
Inside function:
Global Value = 100
Local Value = 50

## Author

M.Likitha
