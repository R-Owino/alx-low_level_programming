## Variadic functions

These are functions that take a variable of arguments. They add flexibility to the program. They take one fixed argument, then any number of arguments can be passed. 

Syntax: ```int function_name(data_type variable_name, ...);```

## va_start, va_arg and va_end macros
- va_start enables access to variadic function arguments with a va_list variable type. 
- va_arg access the next variadic function argument.
- va_end ends the traversal of the variadic function arguments.

## Why and how to use the const type qualifier

The const qualifier is used to decalre a variable as a constant, meaning we cannot change the value once the variable has been initialised. 
It is used because it offers a benefit of not allowing any part of a program modify a value of a variable. Example: 
```
#include<stdio.h>

/**
 * main - const example
 * Return: 0
 */

int main() {
   const int x = 10;
   x = 12;
   return 0;
}
```
would give this output: ```[Error] assignment of read-only variable 'x'```
This is because the value of x has been declared as 10, and are tryin to change it. 

[More on const type](https://www.youtube.com/watch?v=1W4oyuOdXv8)
