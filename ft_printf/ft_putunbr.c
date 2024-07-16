#include "ft_printf.h"

int ft_putunbr(unsigned int n)
{
    int len = 0;
    if (n > 9) {
        len += ft_putunbr(n / 10);
    }
    len += ft_putchar(n % 10 + '0');
    return len;
}