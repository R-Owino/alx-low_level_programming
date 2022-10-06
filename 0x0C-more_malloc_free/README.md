## Automatic and dynamic memory allocation II

An extension of `malloc` and `free` functions with a delve into `calloc` and `realloc` functions.

- `calloc` allocates requested memory and returns a pointer to it, much like `malloc`, but unlike `malloc` it sets the allocated memory to 0.

Function declaration for calloc() function: 
```
void *calloc(size_t nitems, size_t size)
```
where:
- nitems - is the number of elements to be allocted.
- size - size of the elements.


- `realloc` function attempts to resize the memory block pointed to by a pointer variable that was previously allocated with a call to `malloc` or `calloc`. 

Function declaration for the realloc() funtion:
```
void *realloc(void *ptr, size_t size)
```
where:
- ptr - is the pointer to a memory block previously allocated with malloc, calloc or realloc to be reallocated. If this is NULL, a new block is allocated and a pointer to it is returned by the function.
- size - is the new size for the memory block, in bytes. If it is 0 and ptr points to an existing block of memory, the memory block pointed by ptr is deallocated and a NULL pointer is returned.
