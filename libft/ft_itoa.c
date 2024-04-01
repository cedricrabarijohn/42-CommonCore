/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:15:52 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 12:15:41 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

static void	st_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

static char	nb_to_char(int nb)
{
	char	res;

	res = '0';
	if (st_isdigit(nb + 48))
		res = nb + 48;
	return (res);
}

static size_t	get_nb_length(int nb)
{
	int		tmp;
	size_t	ln;

	ln = 0;
	tmp = nb;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		ln++;
	}
	return (ln);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	size_t			nb_len;
	size_t			tmp;
	char			*res;

	nb_len = get_nb_length(n);
	nb = (unsigned int)n;
	if (n <= 0)
	{
		nb = -(unsigned int)n;
		nb_len++;
	}
	res = (char *)malloc((nb_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	st_bzero(res, nb_len + 1);
	while (nb_len--)
	{
		tmp = nb % 10;
		nb = nb / 10;
		res[nb_len] = nb_to_char(tmp);
		if (nb_len == 0 && n < 0)
			res[nb_len] = '-';
	}
	return (res);
}
