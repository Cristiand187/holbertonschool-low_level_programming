#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(int *array, size_t l, size_t r);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
