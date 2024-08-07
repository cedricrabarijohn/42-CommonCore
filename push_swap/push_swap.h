#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void push_swap(size_t count, char **numbers_char);

// Swap
size_t swap(size_t *pile, char *desc);
size_t swap_ab(size_t *a_pile, size_t *b_pile);

// Push
size_t  push(size_t *pile);
size_t  push_ab(size_t *apile, size_t *b_pile);

// utils
size_t  count_arr_len(size_t  *arr);

#endif