#include "main.h"
#include <stdio.h>

int main(void)
{
    char *c = malloc_checked(1024);
    printf("Allocation successful: %p\n", (void *)c);
    free(c);
    return (0);
}
