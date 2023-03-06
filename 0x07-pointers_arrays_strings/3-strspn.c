#include "main.h"
#include <string.h>
/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: The initial contents
 * @accept: The value to be counted
 * Return: (count);
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*ptr == *s)
			{
			count++;
			break;
			}
			ptr++;
		}
		if (!*ptr)
		{
			break;
		}
		s++;
	}

	return (count);
}
