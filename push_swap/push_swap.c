#include "push_swap.h"
#include "libft/libft.h"

void push_swap(size_t count, char **numbers_char)
{
	size_t	i;
	size_t	*err;
	size_t	*a_pile;
	size_t	*b_pile;

	err = 0;
	i = 0;
	if (count > 1)
	{
		a_pile = malloc((count - 1) * sizeof(size_t));
		if (a_pile == NULL)
			return (free(a_pile));
		while (i < count - 1)
		{
			a_pile[i] = ft_atoi(numbers_char[i + 1]);
			i++;
		}
		free(a_pile);
	}
}
