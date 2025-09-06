#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int ft_printf(const char *format, ...);

int ft_parse(const char *format, va_list *args);

int ft_print_char(char c);
int ft_print_str(const char *str);
int ft_print_pointer(void *p);
int ft_print_int(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n, int uppercase);
int ft_print_percent(void);


size_t	ft_strlen(const char *s);
int     ft_putchar(char c);
int     ft_write(const char *s, size_t len);
int     ft_putstr(const char *str);
int     ft_putnbr_base(unsigned long long n, char *base);

#endif