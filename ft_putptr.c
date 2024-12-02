/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:10:42 by wimam             #+#    #+#             */
/*   Updated: 2024/12/02 21:19:17 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbrhexp(size_t nb)
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

int	ft_putptr(size_t ptr)
{
	ft_putstr("0x");
	return (ft_putnbrhexp(ptr) + 2);
}
