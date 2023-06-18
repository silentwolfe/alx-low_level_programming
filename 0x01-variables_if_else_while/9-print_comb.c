#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: returns 0 is success else failure
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
