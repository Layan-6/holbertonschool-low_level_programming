#include "lists.h"
#include <stdio.h>

/**
 * main - test the add_node function
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head = NULL;
	list_t *node;

	/* Test case: Add 1 node */
	printf("Adding 1 node:\n");
	node = add_node(&head, "Hello");
	if (node == NULL)
		printf("Failed to add node\n");
	print_list(head);
	printf("\n");

	/* Test case: Add 2 nodes */
	printf("Adding 2nd node:\n");
	node = add_node(&head, "World");
	if (node == NULL)
		printf("Failed to add node\n");
	print_list(head);
	printf("\n");

	/* Test case: Add empty string */
	printf("Adding empty string node:\n");
	node = add_node(&head, "");
	if (node == NULL)
		printf("Failed to add node\n");
	print_list(head);
	printf("\n");

	/* Test case: Add NULL string */
	printf("Adding NULL string node:\n");
	node = add_node(&head, NULL);
	if (node == NULL)
		printf("Failed to add node\n");
	print_list(head);

	return (0);
}
