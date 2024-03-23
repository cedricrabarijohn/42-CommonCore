/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:30:40 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/23 11:30:42 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (tmp_dest < tmp_src || tmp_dest >= (tmp_src + n))
	{
		while (i < n)
		{
			*tmp_dest++ = *tmp_src++;
			i++;
		}
	}
	else
	{
		tmp_dest += n;
		tmp_src += n;
		while (n--)
		{
			*(tmp_dest--) = *(tmp_src--);
		}
	}
	return (dest);
}
