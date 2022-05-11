#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name to give the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog of type struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	a_dog = malloc(sizeof(*a_dog));
	if (a_dog == NULL || name == NULL || owner == NULL)
	{
		free(a_dog);
		return (NULL);

	};
	a_dog->name = malloc(strlen(name) + 1);
	a_dog->owner = malloc(strlen(owner) + 1);
	if (a_dog->name == NULL || a_dog->owner == NULL)
	{
		free(a_dog->name);
		free(a_dog->owner);
		free(a_dog);
		return (NULL);
	};
	strcpy(a_dog->name, name);
	a_dog->age = age;
	strcpy(a_dog->owner, owner);
	return (a_dog);
}
