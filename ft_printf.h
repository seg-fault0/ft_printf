/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:14:54 by wimam             #+#    #+#             */
/*   Updated: 2024/12/06 22:40:00 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_putnbrdec(int nb);
int		ft_putnbru(unsigned int i);
int		ft_putnbrhex(unsigned long nb, const char *type);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putptr(size_t ptr);
int		ft_putpercent(void);
size_t	ft_strlen(const char *s);

#endif