#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	char *char_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
