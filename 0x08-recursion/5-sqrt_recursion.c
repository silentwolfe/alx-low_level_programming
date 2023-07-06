#include "main.h"

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	int mid = n / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_recursion(mid + 1));
	}
	else
	{
		return (-1);
	}
}
