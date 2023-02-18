#include <stdio.h>
/**
 * main - Prints alphabets both in lowercase then in uppercase
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char os;

	for (os = 'a'; os <= 'z'; os++)
	putchar(os);

	for (os = 'A'; os <= 'Z'; os++)
	putchar(os);

	putchar("\n");

	return (0);
}
