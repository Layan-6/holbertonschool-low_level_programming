#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */

	printf("%d\n", argc - 1);
	return (0);
}
