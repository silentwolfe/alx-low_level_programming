#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: returns 0 if successful else wrong
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
