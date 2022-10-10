#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner's name
 *
 * Return: a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doggo;
	dog_t *d_ptr = &doggo;

	if (d_ptr == NULL)
		return (NULL);

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;

	return (d_ptr);
}
