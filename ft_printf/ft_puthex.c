#include "ft_printf.h"

int ft_puthex(unsigned int n, int uppercase)
{
    char *base;
    int len = 0;

    if (uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";

    if (n >= 16)
        len += ft_puthex(n / 16, uppercase);
    len += ft_putchar(base[n % 16]);
    return len;
}