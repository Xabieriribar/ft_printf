#include "ft_printf.h"

int ft_print_hex(unsigned int n, int uppercase)
{
    char    *base;
    int     n_written;

    base = "0123456789abcdef";
    if (uppercase)
        base = "0123456789ABCDEF";
    n_written = ft_putnbr_base(n, base);
    return (n_written);
}