#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head = NULL;
    list_t *new_node;
    size_t n;

    /* Test case: print_list(NULL) */
    printf("Testing print_list(NULL):\n");
    n = print_list(NULL);
    printf("-> %lu elements\n\n", n);

    /* Test case: List of two elements, one with NULL string */
    head = malloc(sizeof(list_t));
    if (head == NULL)
        return (1);
    
    head->str = NULL;
    head->len = 0;
    head->next = malloc(sizeof(list_t));
    
    if (head->next == NULL)
        return (1);
    
    head->next->str = "World";
    head->next->len = 5;
    head->next->next = NULL;

    printf("Testing list with NULL string:\n");
    n = print_list(head);
    printf("-> %lu elements\n\n", n);

    /* Free allocated memory */
    free(head->next);
    free(head);

    return (0);
}
