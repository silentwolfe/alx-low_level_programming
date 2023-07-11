#include <stdio.h>

/**
 * main - This function prints its name
 * folllowed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		return (1);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
