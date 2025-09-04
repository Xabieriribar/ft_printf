#include "ft_printf.h"

/*
int print_char(va_list args)
{
    char    ch;

    ch = (char) va_arg(args, int);
    write(1, &ch, 1);
    return (1);
}
int handle_specifier(const char *format, size_t *i, va_list args)
{
    if (format[*i] == 'c')
        return (print_char(args));
    return (0);
}
*/
int ft_printf(const char *format, ...)
{
    t_data  data;

    data.buffer_index = 0;
    data.buffer_size = BUFFER_SIZE;
    data.chars_written= 0;
    data.s = format;
    data.buffer = malloc(data.buffer_size);
    if (!data.buffer)
        return (MALLOC_ERROR);
    ft_memset(data.buffer, 0, buffer.size);
    reset_format(&data);
    va_start(data.ap, data.s);
    while (*data.s && d.chars_written >= 0)
    {
        if (data.s[i] != '%')
        {
            i++;
            parse_format(format, &i, args, frmt);
            counter += handle_specifier(format, &i, args);
        } else {
            write(1, &format[i], 1);
            counter += 1;
        }
        i++;
    }
    va_end(args);
    return (counter);
}