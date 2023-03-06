#include "main.h"
#include <stddef.h>
/**
 * _strchr - This function locates a charcter in a string in C
 * @s: The pointer to the string
 * @c: The charcter we are looking for
 *
 * Return: s (if found) else return null.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
