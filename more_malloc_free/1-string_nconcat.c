#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated space in memory
 *         NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate length of s1 manually */
    while (s1[len1] != '\0')
        len1++;

    /* Calculate length of s2 manually */
    while (s2[len2] != '\0')
        len2++;

    /* If n is greater than s2 length, use entire s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for result */
    result = malloc(len1 + n + 1);
    if (result == NULL)
        return (NULL);

    /* Copy s1 to result */
    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    /* Copy first n bytes of s2 to result */
    for (j = 0; j < n; j++)
        result[i + j] = s2[j];

    /* Null terminate the string */
    result[i + j] = '\0';

    return (result);
}
