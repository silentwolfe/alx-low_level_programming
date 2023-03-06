#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - This program creates a function that searches a
 * string for any of a set of bytes
 * @s: Returns into
 * @accept: source
 * Return: s (success);
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
