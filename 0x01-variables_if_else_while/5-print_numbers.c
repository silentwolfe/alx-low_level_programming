#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: returns 0 if successful else failure
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
