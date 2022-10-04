## Automatic and dynamic memory allocation

- Automatic allocation happens when we declare variables or use strings within double quotes, the program takes care of the memory allocation.
- Dynamic allocation happens when we reserve some amount of space prior to use because we are not sure how much memory is needed. This is done using the```
malloc
```
function.
- To deallocate the memory space allocated by malloc, we use the 
```
free
```
function.

<b>NOTE:</b> You are in charge of memory allocated with malloc. This implies:
- You have to keep track of all the addresses of the allocated memory.
- Your program can run out of memory, the OS can kill it while it's still running.

To track the memory allocated, we use 
```
valgrind
```
