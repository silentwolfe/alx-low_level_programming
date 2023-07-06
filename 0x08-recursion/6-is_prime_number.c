#include "main.h"

/**
 * is_prime_number_recursive - This function prints out prime numbers
 * @n: number to be placed in
 * Return: The function returns 1 if the input integer is a
 * prime number, and 0 otherwise.
 */

int is_prime_number_recursive(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	return (is_prime_number_recursive(n - 1));
}

