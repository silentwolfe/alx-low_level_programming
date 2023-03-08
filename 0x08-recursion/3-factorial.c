#include "main.h"
/**
 * factorial - This program returns the factorial of a given number
 * @n: local varaible
 * Return: 0 (succes);
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
		int result = 1;
		int i;

		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
	return (result);
	}
}
