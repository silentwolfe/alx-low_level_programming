#include "main.h"

/**
 *_strlen_recursion - This function returns the length of a string
 * @s: The string to be passed in
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
