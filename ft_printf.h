# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int ft_printf(const char *, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
void ft_putnbr(long nb);
int ft_putsnbr(int nb);
int ft_putunbr(unsigned int nb);
int ft_puthex(unsigned int nb , char iscase);
int num_of_characters(long nb,int base);
void ft_putnbrhex(unsigned int nb, char *base);

# endif