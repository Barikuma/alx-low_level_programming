#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @d: struct pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
