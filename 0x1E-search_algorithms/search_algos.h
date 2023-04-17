#ifndef SEARCH_ALGOS_h
#define SEARCH_ALGOS_h

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/* Mandatory tasks prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t left, size_t right, int value);

/* Advanced tasks prototypes */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_adv(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int bin_search_rec(int *array, size_t size, int value);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);


#endif /* SEARCH_ALGOS_H */
