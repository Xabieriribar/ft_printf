#include "ft_printf.h"

int dispatch(const char *format, va_list *args)
{
    if (*format == 'c')
        return (ft_print_char(va_arg(args, char)));
    else if (*format == 's')
        return (ft_print_str(va_arg(args, char *)));
    else if (*format == 'd' || format[*i] == 'i')  
        return (ft_print_int(va_arg(args, int)));
    else if (*format == 'u')
        return (ft_print_unsigned(va_arg(args, unsigned int)));
    else if (*format == 'x')
        return (ft_print_hex(va_arg(args, unsigned int), 0));
    else if (*format == 'X')
        return (ft_print_hex(va_arg(args, unsigned int), 1));
    else if (*format == 'p')
        return (ft_print_pointer(va_arg(args, void *)));
    else if (*format == '%')
        return (ft_print_percent());
    return (0);
}

int ft_parse(const char *format, va_list *args)
{
    int counter;

    counter = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            counter += dispatch(*format, args);
        } else {
            counter += pf_write(*format);
        }
        format++;
    }
}