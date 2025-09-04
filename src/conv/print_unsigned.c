#include "ft_printf.h"

int ft_print_unsigned(va_list args)
{
    char    *str;
    unsigned int     nbr;
    int     len;

    nbr = va_arg(args, unsigned int);
    str = ft_utoa(nbr);
    if (!str)
        return (-1);
    len = ft_strlen(str);
    write(1, str, len);
    free(str);
    return (len);
}