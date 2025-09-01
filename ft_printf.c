#include "ft_printf.h"

/*
int print_char(va_list args)
{
    char    ch;

    ch = (char) va_arg(args, int);
    write(1, &ch, 1);
    return (1);
}
int handle_specifier(const char *format, size_t *i, va_list args)
{
    if (format[*i] == 'c')
        return (print_char(args));
    return (0);
}
*/
int ft_printf(const char *format, ...)
{
    size_t  i;
    va_list args;
    int  counter;

    i = 0;
    counter = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i] != '\0')
        {
            i++;
            counter += handle_specifier(format, &i, args);
        } else {
            write(1, &format[i], 1);
            counter += 1;
        }
        i++;
    }
    va_end(args);
    return (counter);
}