#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of both strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for concatenated string + null terminator */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy first string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy second string */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Add null terminator */
	concat[i + j] = '\0';

	return (concat);
}
