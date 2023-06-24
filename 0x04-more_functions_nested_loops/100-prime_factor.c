#include <stdio.h>

/**
 * largestPrimeFactor - This prints the largest prime factor
 * of the number 612852475143
 * @number: prototype def
 * Return: return 0 always as success
 */

long largestPrimeFactor(long number)
{
	long i;

	while (number % 2 == 0)
	{
		number /= 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			number /= i;
		}
	}

	if (number > 2)
	{
		return (number);
	}

	return (-1);
}

/**
 * main - This prints the largestPrimefactor out as a
 * side effect on screen
 * Return: 0 (always)
 */

int main(void)
{
	long number = 612852475143;
	long largestFactor = largestPrimeFactor(number);

	printf("%ld\n", largestFactor);

	return (0);
}
