
#include "ft_printf.h"
int main(void)
{
    int x = 4;
    int counter = 0;
    counter = ft_printf("%c\n%s\n%i\n%d\n%x\n%X\n%p\n", 'c', "hola", 13, 14, 42, 42, &x);
    ft_printf("Counter: %d\n", counter);

}