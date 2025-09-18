#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Calculate lengths of name and owner */
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	/* Allocate memory for new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and copy name */
	name_copy = malloc(sizeof(char) * (name_len + 1));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];

	/* Allocate memory and copy owner */
	owner_copy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	/* Initialize the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
