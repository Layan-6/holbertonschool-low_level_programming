#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: Pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
