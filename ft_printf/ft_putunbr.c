/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:59:28 by trabarij          #+#    #+#             */
/*   Updated: 2024/07/16 15:21:29 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int len;

	len = 0;
	if (n > 9)
		len += ft_putunbr(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}
