#include "push_swap.h"

void push_swap(int args_count ,char **args)
{
	int	i;
	

	i = 1;
	printf("[PUSH_SWAP]\nargs count = %d\n", args_count - 1);
	if (args_count > 1)
	{
		while(args[i])
		{
			printf("arg[%d] : %s\n", i, args[i]);
			i++;
		}
	}
}
