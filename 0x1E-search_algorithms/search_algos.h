#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_
#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Helper Functions */
void print_array(int *, int, int);
#endif  /* _SEARCH_ALGOS_ */
