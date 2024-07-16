#include "ft_printf.h"

int handle_format(va_list args, char specifier)
{
    int len;
    unsigned long long ptr;

    len = 0;
    if (specifier == 'c')
        len += ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        len += ft_putstr(va_arg(args, char *));
    else if (specifier == 'd' || specifier == 'i')
        len += ft_putnbr(va_arg(args, int));
    else if (specifier == 'u')
        len += ft_putunbr(va_arg(args, unsigned int));
    else if (specifier == 'x')
        len += ft_puthex(va_arg(args, unsigned int), 0);
    else if (specifier == 'X')
        len += ft_puthex(va_arg(args, unsigned int), 1);
    else if (specifier == 'p')
    {
        ptr = va_arg(args, unsigned long long);   
        if (ptr == 0)
            len += ft_putstr("(nil)");
        else
        {
            len += ft_putstr("0x");
            len += ft_putptr(ptr);
        }
    }
    else if (specifier == '%')
        len += ft_putchar('%');
    return len;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int len = 0;

    va_start(args, format);
    while (*format) {
        if (*format == '%' && *(format + 1))
            len += handle_format(args, *(++format));
        else
            len += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return len;
}