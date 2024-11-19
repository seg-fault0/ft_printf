/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:10:42 by wimam             #+#    #+#             */
/*   Updated: 2024/11/19 15:35:21 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbrhexp(uintptr_t nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb + 87);
		len++;
	}
	else
	{
		len += ft_putnbrhexp(nb / 16);
		len += ft_putnbrhexp(nb % 16);
	}
	return (len);
}

int	ft_putptr(void *ptr)
{
	uintptr_t	address;

	ft_putstr("0x");
	address = (uintptr_t)ptr;
	return (ft_putnbrhexp(address));
}
