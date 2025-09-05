#include "ft_printf.h"

int ft_print_hex(unsigned int n, int uppercase)
{
    char    *base;
    char    *res;
    int     n_written;

    base = "0123456789abcdef";
    if (uppercase)
        base = "0123456789ABCDEF";
    res = ft_putnbr_base(n, base);
    n_written = ft_print_str(res);
    free(res);
    return (n_written);
}