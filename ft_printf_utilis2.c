#include "ft_printf.h"

int ft_putunbr(unsigned int nb)
{
    ft_putnbr(nb);
    return num_of_characters(nb,10);
}

int ft_puthex(unsigned int nb, char iscase)
{
    if (iscase == 'X')
        ft_putnbrhex(nb,"0123456789ABCDEF");
    else
        ft_putnbrhex(nb,"0123456789abcdef");
    return num_of_characters(nb,16);
}

void ft_putnbrhex(unsigned int nb, char *base)
{
    if (nb / 16)
        ft_putnbrhex(nb / 16,base);
    ft_putchar(base[nb % 16]);
}