## Structures and typdef in C

### Structure

- A structure creates user defined data type in C. It creates a data type that can be used to group items of possibly diffeerent types into a single type.
- A structure is created using the `struct` keyword, for example:
```
struct address
{
char name[50];
char street[100];
char city[50];
char state[20];
int pin;
};
```

More resources on structures:
- [Structures in C](https://www.geeksforgeeks.org/structures-c/)
- [Struct - C programming language](https://en.wikipedia.org/wiki/Struct_(C_programming_language))

### Typedef

typedef is a keyword provided by C that is used to give data type a new name. 
For example:
```
typedef unsigned char BYTE;
  
int main()
{
    BYTE b1, b2;
    b1 = 'c';
    printf("%c ", b1);
    return 0;
}
```

After this type definition, the identifier ‘BYTE’ can be used as an abbreviation for the type unsigned char
