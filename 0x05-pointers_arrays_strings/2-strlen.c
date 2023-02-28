#include "main.h"
/**
 * _strlen - This  function that returns the length of a string.
 * @s: prototype declaration
 * Return: (0);
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
