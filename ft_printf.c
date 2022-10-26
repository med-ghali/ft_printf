#include "ft_printf.h"

int print_variable(char type, va_list *p)
{
    if (type == '%')
        return ft_putchar('%');
    if (type =='c')
        return ft_putchar(va_arg(*p,int));
    if (type == 's')
        return ft_putstr(va_arg(*p,char *));
    if (type == 'i' || type == 'd')
        return ft_putsnbr(va_arg(*p,int));
    if (type == 'u')
        return ft_putunbr(va_arg(*p,unsigned int));
    if (type == 'x' || type == 'X')
        return ft_puthex(va_arg(*p,unsigned int),type);
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
    int a = printf("%x %X",-1,-1);
    printf("\n%d\n",a);
    int b = ft_printf("%x %X",-1,-1);
    printf("\n%d",b);
}