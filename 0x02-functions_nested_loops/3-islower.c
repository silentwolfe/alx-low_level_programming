#include "main.h"

/**
 *  _islower - Write a function that checks for lowercase character.
 *  @c: integer prototype
 *  Return: returns 1 as success and 0 as failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
