/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:52:04 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/29 18:09:31 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*res;

	size = ft_strlen(s);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s, size);
	res[size] = '\0';
	return (res);
}
