#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: string to calculate length of
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (str[len])
		len++;

	return (len);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if failed
 */
char *_strdup(const char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
	{
		dup = strdup("(nil)");
		return (dup);
	}

	len = _strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;

	if (head == NULL)
		return (NULL);

	str_dup = _strdup(str);
	if (str_dup == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_dup);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
