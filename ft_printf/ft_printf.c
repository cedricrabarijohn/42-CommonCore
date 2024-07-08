#include "ft_printf.h"

static int handle_format(va_list args, char format)
{
    int len = 0;
    if (format == 'c')
        len += ft_putchar(va_arg(args, int));
    else if (format == 's')
        len += ft_putstr(va_arg(args, char *));
    else if (format == 'd' || format == 'i')
        len += ft_putnbr(va_arg(args, int));
    else if (format == 'x')
        len += ft_puthex(va_arg(args, unsigned int), 0);
    else if (format == 'X')
        len += ft_puthex(va_arg(args, unsigned int), 1);
    else if (format == 'p')
        len += ft_putptr(va_arg(args, unsigned long long));
    else if (format == '%')
        len += ft_putchar('%');
    return len;
}

int ft_printf(const char *format, ...) {
    va_list args;
    int len = 0;

    va_start(args, format);
    while (*format) {
        if (*format == '%' && *(format + 1)) {
            len += handle_format(args, *(++format));
        } else {
            len += ft_putchar(*format);
        }
        format++;
    }
    va_end(args);
    return len;
}