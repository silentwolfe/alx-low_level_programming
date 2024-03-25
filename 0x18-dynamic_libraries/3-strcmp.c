#include "main.h"

/**
 * _strcmp - This function concatenates a string
 * @s1: Represents the first string.
 * @s2: Represents the second string
 *
 * Return: unsigned chars.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
