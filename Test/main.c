#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("%s\n", "Hello World");
    _printf("Percent:[%%]\n");
    _printf("Character:[%c]\n", 'H');
    _printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Len:[%d]\n", len);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("%b\n", 98);

    return (0);
}
