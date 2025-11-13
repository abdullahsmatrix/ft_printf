#include "ft_printf.h"

int main(void)
{
    int i = 42;
    int *ptr = &i;
    
    ft_printf("Test 1 - char: %c\n", 'A');
    ft_printf("Test 2 - string: %s\n", "Hello");
    ft_printf("Test 3 - pointer: %p\n", ptr);
    ft_printf("Test 4 - int: %d\n", 122);
    ft_printf("Test 5 - unsigned: %u\n", 99200);
    ft_printf("Test 6 - hex lower: %x\n", 255);
    ft_printf("Test 7 - hex upper: %X\n", 255);
    ft_printf("Test 8 - percent: %%\n");
    
    return (0);
}
