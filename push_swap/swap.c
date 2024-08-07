#include "push_swap.h"

size_t swap(size_t *pile, char *desc)
{
	size_t	tmp;
	int		i;

	i = 0;
	if (pile && pile[0] && pile[1])
	{
		tmp = pile[0];
		pile[0] = pile[1];
		pile[1] = tmp;
		if (desc)
		{
			while (desc[i])
			{
				write(1, &desc[i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
		return (1);
	}
	return (0);
}

size_t swap_ab(size_t *a_pile, size_t *b_pile)
{
	swap(a_pile, NULL);
	swap(b_pile, NULL);
	write(1, "ss\n", 3);
}
