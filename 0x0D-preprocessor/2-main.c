#include <stdio.h>

/**
 * main - This is a function thats prints the name of the file
 * it was compiled from
 * @argc: The argument counter
 * @argv: Argument vector
 * Return: (0 as success) && (1 or any number but 0 as failure)
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
