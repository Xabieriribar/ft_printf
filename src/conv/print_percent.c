#include "ft_printf.h"

int ft_print_percent()
{
    write(1, "%", 1);
    return (1);
}