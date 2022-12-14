/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:09:53 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/27 14:09:58 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	char	*b;

	if (!s)
		return (ft_putstr("(null)"));
	b = s;
	while (*s)
		ft_putchar(*s++);
	return (s - b);
}

int	ft_putsnbr(int nb)
{
	ft_putnbr(nb);
	return (num_of_characters(nb, 10));
}

int	num_of_characters(int nb, int base)
{
	int	count;

	count = 1;
	if (nb < 0)
		count ++;
	while (nb / base)
	{
		count++;
		nb /= base;
	}
	return (count);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}
