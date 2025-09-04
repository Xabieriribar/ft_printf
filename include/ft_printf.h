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
#define MALLOC_ERROR -42;

typedef enum e_base
{
    BASE_10 = 10;
    BASE_16 = 16; 
} t_base;
typedef struct s_format
{
    bool Plus;
    bool leftJustify;
    bool space;
    bool hash;
    bool zeroPad;
    bool uppercase;
    int  width_value;
    int  precision_value;
    char specifier;

} t_format;

typedef struct s_data
{
    va_list ap;
    const char *s;
    char    *buffer;
    int chars_written;
    int buffer_index;
    int buffer_size; 
    t_format format;
} t_data;


void    ft_memset(t_data data, int c, size_t data);
int ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char    *ft_utoa(unsigned int n);
int	ft_atoi(const char *nptr, int *i);
size_t	ft_strlen(const char *s);
int	ft_isdigit(va_list args);
char	*ft_utoa_base(unsigned long n, int uppercase);
void    parse_format(const char *format, size_t *i, va_list args);
int ft_print_percent(void);
int ft_print_pointer(va_list args);
int ft_print_unsigned(va_list args);
int ft_print_hex(va_list args, int uppercase);
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int handle_specifier(const char *format, size_t *i, va_list args);
#endif