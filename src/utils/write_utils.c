#include "ft_printf.h"

int     ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_write(const char *s, size_t len)
{
    write(1, s, len);
}

int     ft_print_str(char *str)
{
    int  count;
    size_t  len;

    if (!str)
    {
        count = ft_write("(nil)",  5);
        return (count);
    }
    len  = ft_strlen(str);
    count = ft_write(str, len);
    return (count);
}