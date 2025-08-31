#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("Testing _isdigit function:\n");
    
    // Test digits (should return 1)
    for (char c = '0'; c <= '9'; c++)
    {
        printf("'%c': %d\n", c, _isdigit(c));
    }
    
    // Test non-digits (should return 0)
    printf("'a': %d\n", _isdigit('a'));
    printf("'A': %d\n", _isdigit('A'));
    printf("'@': %d\n", _isdigit('@'));
    printf("' ': %d\n", _isdigit(' '));
    
    return (0);
}
