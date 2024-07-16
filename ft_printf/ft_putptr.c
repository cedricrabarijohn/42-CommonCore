/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:59:23 by trabarij          #+#    #+#             */
/*   Updated: 2024/07/16 15:20:42 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (ptr == 0)
		len += ft_putstr("(nil)");
	else
	{
		if (ptr > 15)
			len += ft_putptr(ptr / 16);
		len += ft_putchar(base[ptr % 16]);
	}
	return (len);
}
