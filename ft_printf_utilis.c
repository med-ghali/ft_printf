#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1,&c,1);
    return 1;
}
int ft_putstr(char *s)
{
    char *b;

    b = s;
    while (*s)
        ft_putchar(*s++);
    return (s-b);
}
int ft_putsnbr(int nb)
{
    ft_putnbr(nb);
    return num_of_characters(nb);
}
int num_of_characters(int nb)
{
    int count;

    count = 1;
    if (nb < 0)
    {
        count ++;
        nb *= -1;
    }
    while(nb/10)
    {
        count++;
        nb /= 10;
    }
    return count;
}
void ft_putnbr(long nb)
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
