#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of character c in string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
