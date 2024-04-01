/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabarij <trabarij@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:17:44 by trabarij          #+#    #+#             */
/*   Updated: 2024/04/01 15:47:52 by trabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	st_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (st_isalpha(c) > 0 && c >= 97)
		return (c - 32);
	return (c);
}
