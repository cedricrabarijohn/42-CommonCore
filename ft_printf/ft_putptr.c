#include "ft_printf.h"

int ft_putptr(unsigned long long ptr)
{
    int len = 0;
    char *base = "0123456789abcdef";
    
    if (ptr == 0)
        len += ft_putstr("(nil)");
    else
    {
        if (ptr > 15)
            len += ft_putptr(ptr / 16);
        len += ft_putchar(base[ptr % 16]);
    }
    return len;
}