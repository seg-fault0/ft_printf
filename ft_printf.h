/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:14:54 by wimam             #+#    #+#             */
/*   Updated: 2024/11/22 22:51:49 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h> 

int		ft_printf(const char *format, ...);
int		ft_putnbrdec(int nb);
int		ft_putnbru(unsigned int i);
int		ft_putnbrhex(unsigned int nb, const char *type);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putptr(void *ptr);
int		ft_putpercent(void);
size_t	ft_strlen(const char *s);

#endif