#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;


	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i] && i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[i] && i < len_s2)
	{
		res[i] = s2[i];
		i++;
	}
	res[i] = '\0';
	return res;
}

