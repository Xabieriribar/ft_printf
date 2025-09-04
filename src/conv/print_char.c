#include "ft_printf.h"

int print_char(va_list args)
{
    char    ch;
    t_format    format;

    ch = (char) va_arg(args, int);
    if (format.width)
    {
        while (format.width > 0)
        {
            write(1, ' ', 1);
            format.width--;
        }
    }
    write(1, &ch, 1);
    return (1);
}