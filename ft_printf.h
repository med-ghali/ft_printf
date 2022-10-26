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
int ft_putnbr(int num);

# endif