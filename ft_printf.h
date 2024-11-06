/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:14:54 by wimam             #+#    #+#             */
/*   Updated: 2024/11/06 14:05:25 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
void	ft_putnbrdec(int nb);
void	ft_putnbru(unsigned int i);
void	ft_putnbrhex(unsigned int nb, const char *type);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putptr(void *ptr);
void	ft_putpercent(void);
size_t	ft_strlen(const char *s);

#endif