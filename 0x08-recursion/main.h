#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file with all function declarations 
 * 	 for this project's tasks.
 */


void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int _putchar(char c);
int sq(int n, int base);
int is_prime(int n, int m);
int is_palindrome(char *s);
int last(char *s);
int palindrome(char *s, int b, int n, int pair);
int wildcmp(char *s1, char *s2);
int strlen_with_no_wilds(char *str);
void loop_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);



#endif
