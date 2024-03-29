/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:30:40 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/29 18:05:29 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
