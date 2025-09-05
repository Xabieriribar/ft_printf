
#include "ft_printf.h"

int	main(void)
{
	int		ret;
	void	*ptr;

	ret = ft_printf("Hello %s %c %d %i %u %x %X %% %p\n",
		"world", '!', -2147483648, 42, 4294967295u,
		3735928559u, 3735928559u, (void *)0x1234);
	ft_printf("ret = %d\n", ret);
	ptr = 0;
	ft_printf("NULL ptr: %p\n", ptr);
	ft_printf("Unknown: %q end\n");
	return (0);
}

