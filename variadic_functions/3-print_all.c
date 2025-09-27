#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format
 * @format: List of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int sep = 0;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		if (sep && (format[i] == 'c' || format[i] == 'i' ||
			   format[i] == 'f' || format[i] == 's'))
			printf(", ");

		if (format[i] == 'c')
			printf("%c", va_arg(args, int)), sep = 1;
		if (format[i] == 'i')
			printf("%d", va_arg(args, int)), sep = 1;
		if (format[i] == 'f')
			printf("%f", va_arg(args, double)), sep = 1;
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			printf("%s", s ? s : "(nil)");
			sep = 1;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
