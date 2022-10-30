/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:10:01 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/27 14:10:03 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	ft_putnbr(nb);
	return (num_of_characters_u(nb, 10));
}

int	ft_puthex(unsigned int nb, char iscase)
{
	if (iscase == 'X')
		ft_putnbrhex(nb, "0123456789ABCDEF");
	else
		ft_putnbrhex(nb, "0123456789abcdef");
	return (num_of_characters_u(nb, 16));
}

int	ft_putadress(unsigned long long nb)
{
	ft_putstr("0x");
	ft_putnbrhex(nb, "0123456789abcdef");
	return (2 + num_of_characters_u(nb, 16));
}

void	ft_putnbrhex(unsigned long long nb, char *base)
{
	if (nb / 16)
		ft_putnbrhex(nb / 16, base);
	ft_putchar(base[nb % 16]);
}

int	num_of_characters_u(unsigned long long nb, int base)
{
	int	count;

	count = 1;
	while (nb / base)
	{
		count++;
		nb /= base;
	}
	return (count);
}
