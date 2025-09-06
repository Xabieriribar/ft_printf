#include "ft_printf.h"

int ft_print_pointer(void *pointer)
{
    unsigned long long nl;
    int     n_written;
    char    *base;

    nl = (unsigned long long)pointer;
    base = "0123456789abcdef";
    ft_write("0x", 2);
    n_written = ft_putnbr_base(nl, base);
    return (n_written + 2);
}