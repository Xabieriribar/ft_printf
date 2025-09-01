#include "ft_printf.h"

int print_char(va_list args)
{
    char    ch;

    ch = (char) va_arg(args, int);
    write(1, &ch, 1);
    return (1);
}