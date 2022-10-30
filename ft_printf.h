/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:10:19 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/27 14:10:23 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		print_variable(char type, va_list p);

int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(long nb);
int		ft_putsnbr(int nb);
int		ft_putunbr(unsigned int nb);

int		ft_puthex(unsigned int nb, char iscase);
int		num_of_characters(int nb, int base);
void	ft_putnbrhex(unsigned long long nb, char *base);
int		num_of_characters_u(unsigned long long nb, int base);
int		ft_putadress(unsigned long long nb);

#endif
