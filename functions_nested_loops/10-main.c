#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    n = add(0, 0);
    printf("%d\n", n);
    n = add(-5, 5);
    printf("%d\n", n);
    n = add(100, -50);
    printf("%d\n", n);
    return (0);
}
