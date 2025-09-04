#include "ft_printf.h"

int ft_print_pointer(va_list args)
{
    void    *pointer;
    unsigned long   ptr;
    char    *str;
    int     len;

    pointer = va_arg (args, void *);
    if (!pointer)
    {
        write(1, "(nil)", 5);
        return (5);
    }
    ptr = (unsigned long)pointer;
    str = ft_utoa_base(ptr, 0);
    len = ft_strlen(str);
    write(1, "0x", 2);
    write(1, str, len);
    free(str);
    return (len + 2);
}