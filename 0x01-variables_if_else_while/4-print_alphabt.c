#include  <stdio.h>

/**
 * main - This program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: return 0 if successful else faillure
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');

	return (0);

}
