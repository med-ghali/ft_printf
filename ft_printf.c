/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtagemou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:09:42 by mtagemou          #+#    #+#             */
/*   Updated: 2022/10/27 14:09:43 by mtagemou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_variable(char type, va_list p)
{
	if (type == '%')
		return (ft_putchar('%'));
	if (type == 'c')
		return (ft_putchar(va_arg(p, int)));
	if (type == 's')
		return (ft_putstr(va_arg(p, char *)));
	if (type == 'i' || type == 'd')
		return (ft_putsnbr(va_arg(p, int)));
	if (type == 'u')
		return (ft_putunbr(va_arg(p, unsigned int)));
	if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(p, unsigned int), type));
	if (type == 'p')
		return (ft_putadress(va_arg(p, unsigned long long)));
	if (type == '\0')
		return (0);
	else
		return (ft_putchar(type));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;
	int		count;

	va_start(p, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
			count += print_variable(s[++i], p);
		else
			count += ft_putchar(s[i]);
		if (s[i])
			i++;
	}
	return (count);
	va_end(p);
}
