#include "dog.h"
#include <stdlib.h>
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

	a_dog = malloc(sizeof(dog_t));
	if (!a_dog)
		return (NULL);
	a_dog->name = name;
	a_dog->age = age;
	a_dog->owner = owner;
	return (a_dog);
}
