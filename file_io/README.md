#include <stdio.h>

int main(void)
{
    ssize_t result;
    
    result = read_textfile("example.txt", 1024);
    printf("Read and printed %ld bytes\n", result);
    
    return (0);
}
