#include "main.h"

/**
 * factorial - This function returns the length of a string
 * @s: The string to be passed in
 * Return: The factorial of anynumber
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}

