#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *c = malloc_checked(1024);
    printf("Allocation successful\n");
    free(c);
    return (0);
}
