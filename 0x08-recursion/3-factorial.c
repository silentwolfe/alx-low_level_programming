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
		return (n * factorial(n - 1));
	}
}
