#include "ft_printf.h"
void    parse_format(const char *format, size_t *i, va_list args, t_format *frmt)
{

    while(format[*i] == '+' || format[*i] == '-' || format[*i] == '0' || format[*i] == ' ')
    {
        if (format[*i] == '+')
            frmt.Plus = true;
        else if (format[*i] == '-')
            frmt.leftJustify = true;
        else if (format[*i] == ' ')
            frmt.space = true;
        else if (format[*i] == '0')
            frmt.zeroPad = true;
        else if (format[*i] == '#')
            frmt.hash = true;
        (*i)++;
    }
}
int handle_specifier(const char *format, size_t *i, va_list args)
{
    if (format[*i] == 'c')
        return (print_char(args));
    else if (format[*i] == 's')
        return (print_str(args));
    else if (format[*i] == 'd' || format[*i] == 'i') 
        return (print_int(args));
    else if (format[*i] == 'u')
        return (ft_print_unsigned(args));
    else if (format[*i] == 'x')
        return (ft_print_hex(args, 0));
    else if (format[*i] == 'X')
        return (ft_print_hex(args, 1));
    else if (format[*i] == 'p')
        return (ft_print_pointer(args));
    else if (format[*i] == '%')
        return (ft_print_percent());
    return (0);
}