#include "main.h"

/**
 * _isupper - The function checks for
 * uppercase characters
 * @c: prototype def
 * Return: return 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
