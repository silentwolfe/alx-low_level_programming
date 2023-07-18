#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints the output of the individual variable
 * @d: The argument parameter for struct dog
 *
 * Return: None
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == 0)
	{
		printf("Age: 0.000000\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
