#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file with all function declarations 
 * 	 for this project's tasks.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);

#endif
