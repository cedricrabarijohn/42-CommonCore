/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:12:05 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 14:31:47 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_arr(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!(*s))
		return (0);
	while (s[i])
	{
		if ((char)s[i] != c)
		{
			len++;
			while ((char)s[i] && (char)s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (len);
}

static size_t	curr_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while ((char)*s && (char)*s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static char	*allocate_n_fill(char const *s, char c)
{
	size_t	i;
	char	*res;
	size_t	len;

	i = 0;
	len = curr_word_len(s, c);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (*s && (char)*s != c)
	{
		res[i] = (char)*s;
		i++;
		s++;
	}
	res[len] = 0;
	return (res);
}

static int	st_free(char **s, size_t i)
{
	if (!s[i])
	{
		while (i--)
			free(s[i]);
		free(s);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	res = (char **)malloc((count_arr(s, c) + 1) * sizeof(char *));
	if (!res || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[i] = allocate_n_fill(s, c);
			if (st_free(res, i))
				return (NULL);
			i++;
			while ((char)*s && (char)*s != c)
				s++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
