#include "variadic_functions.h"

/**
 * sum_them_all - This function that returns the sum of all
 * its parameters.
 * @n: Number of integers to be summed
 * Return: 0 as (success) else failure
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
