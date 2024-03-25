#include "main.h"

/**
 * _isdigit - This function checks for digits
 * @c: prototype def
 * Return: returns 1 is c is a digit else returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
