#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Description: Prints numbers separated by the given separator.
 *              If separator is NULL, it won't be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
