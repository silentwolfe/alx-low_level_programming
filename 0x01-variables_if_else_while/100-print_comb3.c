#include <unistd.h>
#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of two digits.
 *
 * Return: returns 0 as success else failure
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
