#include "main.h"

/**
 * _abs - checks for absolut value
 *
 * @a: Parameter to be checked
 *
 * Return: a (always);
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
