#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test the list_len function
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head = NULL;
	list_t *new_node;
	size_t n;

	/* Test case: list_len(NULL) */
	printf("Testing list_len(NULL):\n");
	n = list_len(NULL);
	printf("-> %lu elements\n\n", n);

	/* Test case: List of 1 element */
	head = malloc(sizeof(list_t));
	if (head == NULL)
		return (1);
	head->str = "Hello";
	head->len = 5;
	head->next = NULL;

	printf("Testing list of 1 element:\n");
	n = list_len(head);
	printf("-> %lu elements\n\n", n);

	/* Test case: List of 2 elements, one with empty string */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (1);
	new_node->str = "";
	new_node->len = 0;
	new_node->next = head;
	head = new_node;

	printf("Testing list of 2 elements (one empty):\n");
	n = list_len(head);
	printf("-> %lu elements\n\n", n);

	/* Free memory */
	free(head->next);
	free(head);

	return (0);
}
