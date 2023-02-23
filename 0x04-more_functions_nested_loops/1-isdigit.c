#include "main.h"

/**
 * _isdigit - Function prints 0 through 9
 * @c: prototype function
 *
 * Return: returns 1 if c is  a digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
