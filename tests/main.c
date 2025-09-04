
#include "ft_printf.h"
int main(void)
{
   t_data data;
   ft_my_memset(data, 0, sizeof(data)); 
   printf("%s", data.chars_written);
}