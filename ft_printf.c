#include "ft_printf.h"

int print_variable(char type, va_list *p)
{
    if (type =='c')
        return ft_putchar(va_arg(*p,int));
    if (type == 's')
        return ft_putstr(va_arg(*p,char *));
}

int ft_printf(const char *s, ...)
{
    va_list p;
    int i;
    int count;

    va_start(p, s);
    i = 0;
    count = 0;
    while(s[i])
    {
        if (s[i] == '%')
            count += print_variable(s[++i],&p);
        else
            count += ft_putchar(s[i]);
        i++;
    }
    return count;
}

int main()
{
    char *s = "abcdef";
    char c = 'c';
    char a = 'a';

    printf("%c\n",129);
    ft_printf("%c",129);
}