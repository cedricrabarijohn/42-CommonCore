/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:47:03 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:32:56 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	st_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	st_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		st_putchar_fd(*s, fd);
		s++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	st_putstr_fd(s, fd);
	st_putchar_fd('\n', fd);
}
