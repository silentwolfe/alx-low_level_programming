#include "main.h"

/**
 * _strlen - This program returns the length of a string
 * @s: prototype declaration
 *
 * Return: integer;
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
