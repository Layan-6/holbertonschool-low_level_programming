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
	unsigned int i = 0, j = 0;
	char *str;
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		j = 0;

		if (current == 'c' || current == 'i' || current == 'f' || current == 's')
		{
			if (i > 0)
				printf(", ");

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
