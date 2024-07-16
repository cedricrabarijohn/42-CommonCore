#include <stdio.h>
#include "ft_printf.h"

int main() {
    // Test characters
    ft_printf("Character: %c\n", 'A');
    printf("Character: %c\n", 'A');

    // Test strings
    ft_printf("String: %s\n", "Hello, World!");
    printf("String: %s\n", "Hello, World!");

    // Test integers
    ft_printf("Integer: %d\n", 42);
    printf("Integer: %d\n", 42);

    // Test hex (lowercase)
    ft_printf("Hex (lowercase): %x\n", 255);
    printf("Hex (lowercase): %x\n", 255);

    // Test hex (uppercase)
    ft_printf("Hex (uppercase): %X\n", 255);
    printf("Hex (uppercase): %X\n", 255);

    // Test pointer
    int a = 42;
    ft_printf("Pointer: %p\n", &a);
    printf("Pointer: %p\n", &a);

    // Test percent
    ft_printf("Percent: %%\n");
    printf("Percent: %%\n");

    return 0;
}
