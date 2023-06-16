#include <stdio.h>

/**
 * main - Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 *
 * Return: success (0) else failure
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
