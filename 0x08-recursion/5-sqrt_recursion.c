#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * @n: local variable
 * Return: 0 (success);
 */

int sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}
