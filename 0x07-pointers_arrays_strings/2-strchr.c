#include "main.h"
#include <stddef.h>

/**
 * _strchr - This function copies a block of memory from
 * one location to another
 * @s: Specifies the pointer to the null-terminated string
 * in which the search is to be performed
 * @c: Specifies the character to be searched
 * Return: The function returns a pointer to the first location
 * of @c in the string if the @s is found else it returns a pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
