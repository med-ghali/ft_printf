int ft_putchar(char c)
{
    write(1,&c,1);
}

int ft_putstr(char *s)
{
    char *b;

    b = s;
    while (*s)
        ft_putchar(*s++);
    return (s-b);
}

int ft_putnbr(int num);
