#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
int write_rev(char *buffer, size_t i)
{
    int total;

    total = 0;
    while (i > 0)
    {
        i--;
        ft_putchar(buffer[i]);
        total++;
    }
    return (total);
}

void    ft_put_neg(unsigned long long n)
{
    if (n < 0)
    {
        ft_write('-');
        n = -n;
    }
}
void    ft_putnbr_base(unsigned long long n, char *base)
{ 
    char    buffer[32];
    size_t  i;
    unsigned int base_len;

    base_len = ft_strlen(base);
    if (base_len < 2)
    {
        return (-1)
    }
    if (nl == 0)
    {
        ft_write('0');
        return (1);
    }
    while (v > 0)
    {
        buffer[i] = base[n % base_len];
        i++;
        n /= base_len;
    }
     
}