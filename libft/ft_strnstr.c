/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:13:19 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/29 16:43:21 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_little;
	size_t	i;
	char	*tmp_big;
	char	*tmp_little;

	tmp_big = (char *)big;
	tmp_little = (char *)little;
	size_little = (size_t)ft_strlen(tmp_little);
	if (!big && !big[0])
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
		if (ft_strncmp(&tmp_big[i], tmp_little, size_little) == 0)
			return (&tmp_big[i]);
		i++;
	}
	return ((char *) NULL);
}
