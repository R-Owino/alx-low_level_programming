More on nested loops, functions and function prototyping.


To compile the .c files, use gcc and the following flags:
	```
	-Wall -Werror -Wextra -pedantic -std=gnu89
	```

Example: 
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
```

This command generates 3 files: 
- The main.c file for testing the function
- The isupper.c file that contains the function
- The isuper file, which is executable


*Don't forget to run the function file(in our example 0-isupper.c file) thru Betty linter*
