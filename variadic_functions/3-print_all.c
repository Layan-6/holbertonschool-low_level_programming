#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format
 * @format: List of types of arguments
 *
 * Description: Prints arguments based on format string:
 * c: char, i: integer, f: float, s: char*
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current;
	int separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];

		if (current == 'c' || current == 'i' || current == 'f' || current == 's')
		{
			if (separator)
				printf(", ");
			separator = 1;

			switch (current)
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
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
					break;
			}
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
