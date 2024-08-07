#include "push_swap.h"

size_t  count_arr_len(size_t  *arr)
{
    size_t  n;

    n = 0;
    while (arr[n])
        n++;
    return (n);
}
