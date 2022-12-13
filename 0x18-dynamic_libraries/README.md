## Dynamic Libraries in Linux

* Also called shared libraries, they are linked at runtime.
* Any program can access these libraries at runtime, avoiding creation of multiple copies for every program.

### How they are created
* First, run this command: `gcc *.c -c -fPIC` It generates one object file (.o) for each source file (.c).
* Then, run this command: `gcc *.o -shared -o libname.so`
* Finally, the path for the libraries will need to be exported. Run this command: `export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`

### How to use them
* Compile the code as follows: `gcc -L test_code.c -lrehema -o test_code`
*Note:* 
	- The source code comes before the -l flag
	- -l combined with _rehema_ tells the compiler to look for a shared library called _librehema.so_
	- -L flag tells the compiler to look in the current directory for the library file.
