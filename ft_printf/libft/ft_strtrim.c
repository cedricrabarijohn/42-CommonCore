/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:21:34 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:44:23 by trabarij         ###   ########.fr       */
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

static size_t	st_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (st_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (st_strlen(src));
}

static int	check_in_set(char c, char const *set)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (set[i])
	{
		if (c == set[i])
			res = 1;
		i++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	begin;
	size_t	last;

	begin = 0;
	while (s1[begin] && check_in_set(s1[begin], set))
		begin++;
	last = st_strlen(s1);
	while (last > begin && check_in_set(s1[last - 1], set))
		last--;
	res = (char *)malloc((last - begin + 1) * sizeof(char));
	if (!res)
		return (NULL);
	st_strlcpy(res, &s1[begin], (last - begin + 1));
	return (res);
}
