#include <stdio.h>
#include <unistd.h>

/**
 * main - Write a program that prints
 * all possible different combinations of three digits.
 *
 * Return: return 0 if success else failure
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; i < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');
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
