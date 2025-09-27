#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_arg - Prints a single argument based on type
 * @type: The type of argument (c, i, f, s)
 * @args: The va_list of arguments
 * @separator: Pointer to separator flag
 */
void print_arg(char type, va_list args, int *separator)
{
	char *str;

	if (*separator)
		printf(", ");
	*separator = 1;

	switch (type)
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
	char current;
	int separator = 0;

	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		va_end(args);
		return;
	}

	while (format[i])
	{
		current = format[i];

		if (current == 'c' || current == 'i' || current == 'f' || current == 's')
			print_arg(current, args, &separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
