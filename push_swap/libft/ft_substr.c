/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:19:57 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:45:00 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*res;

	if (!s)
		return (NULL);
	size = len;
	if (!len || (size_t)start > st_strlen(s))
		size = 0;
	else if (len > st_strlen(s) - start)
		size = st_strlen(s) - start;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && i < (size_t)start)
		i++;
	j = 0;
	while (j < size)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
