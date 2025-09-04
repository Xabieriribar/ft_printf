#include "ft_printf.h"

int ft_print_hex(va_list args, int uppercase)
{
    char    *str;
    unsigned int     nbr;
    int     len;

    nbr = va_arg(args, unsigned int);
    str = ft_utoa_base(nbr, uppercase);
    if (!str)
        return (-1);
    len = ft_strlen(str);
    write(1, str, len);
    free(str);
    return (len);
}