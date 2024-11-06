/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:10:42 by wimam             #+#    #+#             */
/*   Updated: 2024/11/06 14:16:11 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbrhexp(uintptr_t nb)
{
	if(nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb >= 10 && nb <= 15)
			ft_putchar(nb + 87);
	else
	{
		ft_putnbrhexp(nb / 16);
		ft_putnbrhexp(nb % 16);
	}
}

void	ft_putptr(void *ptr)
{
	uintptr_t	address;

	ft_putstr("0x");
	address = (uintptr_t)ptr;
	ft_putnbrhexp(address);
}