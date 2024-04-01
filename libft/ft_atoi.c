/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:55:06 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:46:10 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t			i;
	char			*str;
	int				mul;
	int				res;

	i = 0;
	mul = 1;
	str = (char *)nptr;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mul = -1;
		i++;
	}
	while (st_isdigit((int)str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(mul * res));
}
