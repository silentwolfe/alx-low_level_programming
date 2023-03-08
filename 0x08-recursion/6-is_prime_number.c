#include "main.h"
#include <math.h>
/**
 * is_divisible - entry point
 * @n: local variable
 * @i: loacl variable
 * Return: 0 success
 */

int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);

	if (n % i == 0)
		return (1);

	return (is_divisible(n, i - 1));
}

/**
 * is_prime_number - entry point
 * @n: local variable
 * Return: 0 success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (!is_divisible(n, (int) sqrt(n)));
}
