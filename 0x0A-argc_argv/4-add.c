#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This function adds integers.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
