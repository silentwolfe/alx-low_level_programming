#include <stdio.h>
/**
 * main - Print the whole alphabet in lowercase but not Q and E
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar("\n");
	return (0);
