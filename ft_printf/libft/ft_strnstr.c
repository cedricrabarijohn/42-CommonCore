/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:13:19 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:42:29 by trabarij         ###   ########.fr       */
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

static int	st_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_little;
	size_t	i;
	char	*tmp_big;
	char	*tmp_little;

	tmp_big = (char *)big;
	tmp_little = (char *)little;
	size_little = (size_t)st_strlen(tmp_little);
	if (!big && !(*big))
		return (NULL);
	if (size_little == 0)
		return ((char *)big);
	if (size_little > len)
		return ((char *) NULL);
	i = 0;
	while (tmp_big[i] && i < len)
	{
		if (len - i < size_little)
			return (NULL);
		if (st_strncmp(&tmp_big[i], tmp_little, size_little) == 0)
			return (&tmp_big[i]);
		i++;
	}
	return ((char *) NULL);
}
