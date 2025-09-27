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
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (sep)
				printf(", ");
			
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					printf("%s", s ? s : "(nil)");
					break;
			}
			sep = 1;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
