/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:31:58 by wimam             #+#    #+#             */
/*   Updated: 2024/11/06 13:31:30 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbru(n / 10);
		ft_putnbru(n % 10);
	}
}

void	ft_putnbrdec(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if(nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbrdec(nb / 10);
		ft_putnbrdec(nb % 10);
	}
}

void	ft_putnbrhex(unsigned int nb, const char *type)
{
	if(nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb >= 10 && nb <= 15)
	{
		if(*type == 'x')
			ft_putchar(nb + 87);
		else if(*type == 'X')
			ft_putchar(nb + 55);
	}
	else
	{
		ft_putnbrhex(nb / 16, type);
		ft_putnbrhex(nb % 16, type);
	}
}
