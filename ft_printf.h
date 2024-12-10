/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:14:54 by wimam             #+#    #+#             */
/*   Updated: 2024/12/10 21:01:28 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putnbrdec(int nb);
int		ft_putnbru(unsigned int i);
int		ft_putnbrhex(unsigned long nb, char type);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putptr(size_t ptr);
int		ft_putpercent(void);

#endif