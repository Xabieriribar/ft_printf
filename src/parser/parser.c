#include "ft_printf.h"

int dispatch(const char *format, size_t *i, va_list args)
{
    if (*format == 'c')
        return (ft_print_char(va_arg(args, char)));
    else if (*format == 's')
        return (ft_print_str(va_arg(args, char *));
    else if (*format == 'd' || format[*i] == 'i' || *format) 
        return (ft_print_int(args));
    else if (*format == 'u')
        return (ft_print_unsigned(args));
    else if (*format == 'x')
        return (ft_print_hex(args, 0));
    else if (*format == 'X')
        return (ft_print_hex(args, 1));
    else if (*format == 'p')
        return (ft_print_pointer(args));
    else if (*format == '%')
        return (ft_print_percent());
    return (0);
}

int ft_parse(const char *format)
{
    int counter;

    counter = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            counter += dispatch(*format);
        } else {
            counter += pf_write(*format);
        }
        format++;
    }
}