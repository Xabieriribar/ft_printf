#include "ft_printf.h"

int print_str(va_list args)
{
    char    *str;
    int     len;

    str = va_arg(args, char *);
    if (!str)
        str = "(null)";
    len = ft_strlen(str);
    write(1, str, len);
    return (len);
}