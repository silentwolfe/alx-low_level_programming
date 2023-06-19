#include <stdio.h>
#include <unistd.h>

/**
 * main - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: always (0) success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i % 100 + '0');
				putchar(j % 100 + '0');
				putchar(k % 100 + '0');
				if (i == 7 && j == 8 && k == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
