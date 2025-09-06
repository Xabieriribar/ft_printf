#include "ft_printf.h"

int ft_print_int(int n)
{
    char    *base;
    int     n_written;

    base = "0123456789";
    n_written = ft_putnbr_base(n, base);
    return (n_written);
}

int ft_print_unsigned(unsigned int n)
{
    int n_written;
    char    *base;

    base = "0123456789";
    n_written = ft_putnbr_base(n, base);
    return (n_written);
}