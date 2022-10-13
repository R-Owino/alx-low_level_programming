## Preprocessors

- Pre-processors are not part of the compiler, but is a step performed before the source code is compiled. It performs 3 major tasks:
1. Replace tokens in the text, e.g. in macroos
2. Insert contents of other files into the source file e.g. files mentioned in #include
3. Supress compilation of part of the file by removing sections of text such as comments

### Macros

These are code fragments that have been given a name. Whenever the name is used, it is replaced by the contents of the macro.
There are 2 types of macros:

1. Object-like macros
- This is a simple identifier that will be replaced by a code fragment. Object-like because it looks like a data object in the code that uses it. 
- They are most commonly used to give symbolic names to numeric constants.
- The directive _#define_ is used to create a macro, followed by the name then the token sequence. For example:
	```
	#define BUFFER_SIZE 1024
	```
define a macro named BUFFER_SIZE as an abbreviation for token 1024.

*[More](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros) on object-like macros.

2. Function-like macros
- These are macros that are used like functions.
- To define one, use the same _#define_ directive, but a pair of parenthesis is put immediately after the macro name. For example:
	```
	#define lang_init()  c_init()
     	lang_init()
        	==> c_init()
	```
*[More](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Function-like-Macros.html#Function-like-Macros) on function-like macros.

### Conclusion

Macros are essential when:
- The details of operation in a module can be held and used as if it were a single instruction.
- A frequently used sequence of instructions can be defined as a macro.
- Complex operations are built from simpler operations.

[More resources on macros.](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macros.html#Macros)

