#ifndef STDARG_H
# define STDARG_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

#define BUFFER_SIZE (1 << 12)
#define FLAGS ("+ 0#-")
#define NUMBERS ("0123456789")
#define SPECIFIERS ("cspdiuxX")

int ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char    *ft_utoa(unsigned int n);
size_t	ft_strlen(const char *s);
int ft_print_unsigned(va_list args);
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int handle_specifier(const char *format, size_t *i, va_list args);
#endif