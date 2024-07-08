#include "ft_printf.h"

int ft_putstr(char *s)
{
    int len = 0;
    if (!s)
        return ft_putstr("(null)");
    while (*s) {
        len += ft_putchar(*s++);
    }
    return len;
}
