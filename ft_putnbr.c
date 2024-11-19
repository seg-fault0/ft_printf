/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:31:58 by wimam             #+#    #+#             */
/*   Updated: 2024/11/19 15:35:08 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	ft_putnbru(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbru(n / 10);
		ft_putnbru(n % 10);
	}
	return (num_len(n));
}

int	ft_putnbrdec(int nb)
{
	int	ret;

	ret = num_len(nb);
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbrdec(nb / 10);
		ft_putnbrdec(nb % 10);
	}
	return (ret);
}

int	ft_putnbrhex(unsigned int nb, const char *type)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (*type == 'x')
				ft_putchar(nb + 87);
			else if (*type == 'X')
				ft_putchar(nb + 55);
		}
		len++;
	}
	else
	{
		len += ft_putnbrhex(nb / 16, type);
		len += ft_putnbrhex(nb % 16, type);
	}
	return (len);
}
