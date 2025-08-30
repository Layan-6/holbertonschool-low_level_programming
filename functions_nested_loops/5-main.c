#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    printf("%d\n", r);
    r = print_sign(0);
    printf("%d\n", r);
    r = print_sign(0xff);
    printf("%d\n", r);
    r = print_sign(-1);
    printf("%d\n", r);
    return (0);
}
