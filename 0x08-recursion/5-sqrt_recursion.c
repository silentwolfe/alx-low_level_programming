#include "main.h"

/**
 * sqrt_recursive_helper - The sqrt_recursive_helper function performs a
 * binary search by
 * calculating the middle value (mid) and
 * checking if its square is equal to n.
 * @n: Find the square root of n recursively
 * @start: starting time
 * @end: End time
 * Return: integer
 */

int sqrt_recursive_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (sqrt_recursive_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_recursive_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion -  A function that returns the natural
 * square root of a number.
 * @n: input from user
 * Return: integer
 */

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
		return (sqrt_recursive_helper(n, 1, n));
	}
}
