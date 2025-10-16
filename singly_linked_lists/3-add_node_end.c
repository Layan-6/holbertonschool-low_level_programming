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

	if (str == NULL)
	{
		dup = strdup("(nil)");
		return (dup);
	}

	dup = strdup(str);
	return (dup);
}

/**
 * _create_node - creates a new node with given string
 * @str: string to add to node
 *
 * Return: pointer to new node, or NULL if failed
 */
list_t *_create_node(const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len;

	str_dup = _strdup(str);
	if (str_dup == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_dup);
		return (NULL);
	}

	len = _strlen(str);
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = _create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
