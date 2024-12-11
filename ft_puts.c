/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:50:21 by wimam             #+#    #+#             */
/*   Updated: 2024/12/11 09:03:28 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	char	*count;

	count = str;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		write(1, str++, 1);
	return (str - count);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putptr(size_t ptr)
{
	return ( ft_putstr ("0x") + ft_putnbrhex(ptr, 'x'));
}
