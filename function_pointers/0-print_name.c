#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: Pointer to the function that prints the name
 *
 * Description: Uses the function pointer to print the name.
 *              If either name or f is NULL, does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
