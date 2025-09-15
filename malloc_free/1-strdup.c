#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for duplicate + null terminator */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
