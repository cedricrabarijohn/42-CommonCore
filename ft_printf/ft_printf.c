/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:57:17 by trabarij          #+#    #+#             */
/*   Updated: 2024/07/16 15:13:40 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_p(va_list args)
{
	int					len;
	unsigned long long	ptr;

	ptr = va_arg(args, unsigned long long);
	if (ptr == 0)
		len += ft_putstr("nil");
	else
	{
		len += ft_putstr("0x");
		len += ft_putptr(ptr);
	}
	return (len);
}

int	handle_format(va_list args, char spec)
{
	int	len;

	len = 0;
	if (spec == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (spec == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (spec == 'd' || spec == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (spec == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	else if (spec == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (spec == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (spec == 'p')
		len += handle_p(args);
	else if (spec == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			len += handle_format(args, *(++format));
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
