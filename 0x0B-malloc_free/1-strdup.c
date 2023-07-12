#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * __strdup - This function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	int length;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;

	new_str = malloc(length * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, str, length);

	return (new_str);
}
