#include <stdio.h>

/**
 * main - Prints the program name followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */

	printf("%s\n", argv[0]);
	return (0);
}
