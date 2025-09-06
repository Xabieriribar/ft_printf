#include "ft_printf.h"

int print_str(const char *str)
{
    int n_written;

    n_written = ft_putstr(str);
    return (n_written);
}