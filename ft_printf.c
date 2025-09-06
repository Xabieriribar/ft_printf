#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int  chars_written;
    va_list args;

    va_start(args, format);
    chars_written = ft_parse(format, &args);
    va_end(args);
    return (chars_written);
}