#ifndef __SEARCH_ALGO_H__
#define __SEARCH_ALGO_H__
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int first, int last);
#endif
