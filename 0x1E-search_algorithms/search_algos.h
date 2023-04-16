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
int binary_search_recursive2(int *array, size_t left, size_t right, int value);


#endif /* SEARCH_ALGOS_H */
