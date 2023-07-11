#include <stdio.h>

/**
 * main - This function prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
