#include "main.h"
/**
 * _isupper - This function checks for uppercase characters
 *
 * @c: prototype command
 *
 * Return: 1 if c is uppercase
 * else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
