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
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar("%c", i);
	}
	putchar("\n");

	return (0);
}
