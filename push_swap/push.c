#include "push_swap.h"

size_t  push(size_t *pile)
{
    size_t  len;
    size_t  tmp;

    len = count_arr_len(pile);
    if (len >= 2)
    {
        tmp = pile[len - 1];
        pile[len - 1] = pile[len - 2];
        pile[len - 2] = tmp;
        return (1);
    }
    return (0);
}

size_t  push_ab(size_t *a_pile, size_t *b_pile)
{
    push(a_pile);
    push(b_pile);
}

int main()
{
    size_t  i;
	size_t	*a_pile;

    i = 0;
    a_pile = malloc(4 * sizeof(size_t));
    a_pile[0] = 5;
    a_pile[1] = 6;
    a_pile[2] = 7;
    a_pile[3] = 8;

    push(a_pile);
    while(i < 4)
    {
        printf("%li", a_pile[i]);
        i++;
    }
    free(a_pile);
}