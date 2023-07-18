#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - The initialized variable
 * @d: The argument parameters
 * @name:The argument parameter
 * @age: The argument parameter
 * @owner: The argument parameter
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
