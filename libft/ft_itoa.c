/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:15:52 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/31 18:22:13 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	nb_to_char(int nb)
{
	char	res;
	res = '0';
	if (ft_isdigit(nb + 48))
		res = nb + 48;
	return (res);
}

static size_t	get_nb_length(int nb)
{
	int		tmp;
	size_t	ln;

	ln = 1;
	tmp = nb;
	while (tmp != 0)
	{
		tmp = tmp/10;
		ln++;
	}
	if (nb < 0)
		ln++;
	return (ln);
}

char	*ft_itoa(int n)
{
	size_t	nb;
	size_t	nb_len;
	size_t	tmp;
	char	*res;
	int		i;

	nb_len = get_nb_length(n);
	nb = (size_t)n;
	res = (char *)malloc((nb_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
		nb = -nb;
	i = nb_len - 1;
	while (i--)
	{
		tmp = nb % 10;
		nb = nb / 10;
		res[i] = nb_to_char(tmp);
		if(i == 0 && n < 0)
			res[i] = '-';
	}
	res[nb_len] = '\0';
	return (res);
}
