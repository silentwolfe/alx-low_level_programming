#include <stdio.h>
#include <stdlib.h>

/**
 * main - This fucntion program that prints the opcodes of
 * its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (int i = 0; i < bytes; i++)
	{
		printf("%02hhx ", *((unsigned char *)main + i));
	}

	printf("\n");

	return (0);
}
