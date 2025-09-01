
#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_n_len(long n)
{
	size_t	counter;

	if (n == 0)
		return (1);
	counter = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}


char	*ft_itoa(int n)
{
	long	nbrl;
	char	*nbr;
	int		digits;
	int		sign;

	nbrl = n;
	sign = 0;
	if (nbrl < 0)
	{
		nbrl = -nbrl;
		sign = 1;
	}
	digits = ft_n_len(nbrl);
	nbr = malloc(digits + sign + 1);
	if (!nbr)
		return (NULL);
	nbr[digits + sign] = '\0';
	while (digits > 0)
	{
		nbr[digits + sign - 1] = (nbrl % 10) + '0';
		nbrl /= 10;
		digits--;
	}
	if (sign)
		nbr[0] = '-';
	return (nbr);
}

char	*ft_utoa(unsigned int n)
{
	long	nbrl;
	char	*nbr;
	int		digits;

	nbrl = n;
	digits = ft_n_len(nbrl);
	nbr = malloc(digits + 1);
	if (!nbr)
		return (NULL);
	nbr[digits] = '\0';
	while (digits > 0)
	{
		nbr[digits - 1] = (nbrl % 10) + '0';
		nbrl /= 10;
		digits--;
	}
	return (nbr);
}
