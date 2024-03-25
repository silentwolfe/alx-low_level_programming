#include "main.h"

/**
 * _strspn - This function returns the length of the initial substring of the
 * string pointed to by "s"
 * @s: String to be scanned
 * @accept: string containing the character to match
 * Return: This function returns te number of characters in the initial
 * segment s which consists only of characters of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
