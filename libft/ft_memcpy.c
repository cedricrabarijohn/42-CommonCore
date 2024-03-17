/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:23:29 by trabarij          #+#    #+#             */
/*   Updated: 2024/03/17 12:23:30 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpDest;
	unsigned char	*tmpSrc;

	i = 0;
	tmpDest = (unsigned char *)dest;
	tmpSrc = (unsigned char *)src;
	while (i < n)
	{
		tmpDest[i] = tmpSrc[i];
		i++;
	}
	return (tmpDest);
}