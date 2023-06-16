#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line using putchar.
 *
 * Return: returns 0 (success) else failure
 */

int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
