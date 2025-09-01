#include "ft_printf.h"

int print_int(va_list args)
{
    char    *str;
    int     nbr;
    int     len;

    nbr = va_arg(args, int);
    str = ft_itoa(nbr);
    if (!str)
        return (-1);
    len = ft_strlen(str);
    write(1, str, len);
    free(str);
    return (len);
}