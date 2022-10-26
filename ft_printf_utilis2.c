#include "ft_printf.h"

int ft_putunbr(unsigned int nb)
{
    ft_putnbr(nb);
    return num_of_characters(nb);
}