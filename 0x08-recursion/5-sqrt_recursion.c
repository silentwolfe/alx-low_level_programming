#include "main.h"
#include <stdio.h>

int helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n or -1
 * if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1));
}

/**
 * helper - recursive helper function
 * to find the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current number being squared
 *
 * Return: the square root of n or -1
 * if n does not have a natural square root
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}
