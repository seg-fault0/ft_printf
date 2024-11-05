/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:43:28 by wimam             #+#    #+#             */
/*   Updated: 2024/11/05 17:29:23 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_specifier(const char *format, va_list ap)
{
	while (*format == ' ')
		format++;
	if (*format == 'd' || *format == 'i')
		ft_putnbrdec(va_arg(ap, int));
	else if (*format == 'u')
		ft_putnbru(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		ft_putnbrhex(va_arg(ap, unsigned int), (const char *) format);
	else if (*format == 's')
		ft_putstr(va_arg(ap, char *));
	else if (*format == 'c')
		ft_putchar(va_arg(ap, int));
	else if (*format == 'p')
		ft_putptr(va_arg(ap, void *));
	else if (*format == '%')
		ft_putpercent();
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
			ft_format_specifier(++format, ap);
		else
			write (1, format, 1);
		format++;
	}
	va_end(ap);
	return (0);
}
