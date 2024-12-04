/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:43:28 by wimam             #+#    #+#             */
/*   Updated: 2024/12/04 23:16:20 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(const char *format, va_list ap)
{
	int	count;

	count = 0;
	while (*format == ' ')
		format++;
	if (*format == 'd' || *format == 'i')
		count = ft_putnbrdec(va_arg(ap, int));
	else if (*format == 'u')
		count = ft_putnbru(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		count = ft_putnbrhex(va_arg(ap, unsigned int), (const char *) format);
	else if (*format == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (*format == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (*format == 'p')
		count = ft_putptr(va_arg(ap, size_t));
	else if (*format == '%')
		count = ft_putpercent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
			count += ft_format_specifier(++format, ap);
		else if (*format != '%')
			count += write (1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>
// int main()
// {
// 	int i = -1;
// 	printf("ret = %d \n", ft_printf("%p", i));
// 	printf("ret = %d \n", printf("%p", i));	
// 	return (0);
// }