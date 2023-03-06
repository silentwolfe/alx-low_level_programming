#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: The pointer
 * @b: the constant
 * @n: The tobe filled
 *
 * Return: s (success);
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
