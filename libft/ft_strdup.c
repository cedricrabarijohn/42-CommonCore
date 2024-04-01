/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:52:04 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:37:22 by trabarij         ###   ########.fr       */
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

static void	*st_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		tmp_src = tmp_src + n - 1;
		tmp_dest = tmp_dest + n - 1;
		while (n > 0)
		{
			*tmp_dest-- = *tmp_src--;
			n--;
		}
		return (dest);
	}
	while (n > 0)
	{
		*tmp_dest++ = *tmp_src++;
		n--;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*res;

	size = st_strlen(s);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	st_memmove(res, s, size);
	res[size] = '\0';
	return (res);
}
