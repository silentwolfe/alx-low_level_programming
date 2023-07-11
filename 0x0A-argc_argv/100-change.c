#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - This function prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	if (cents == 0)
	{
		printf("0\n");
		return (0);
	}

	coin = 0;

	coin += cents / 25;
	cents %= 25;

	coin += cents / 10;
	cents %= 10;

	coin += cents / 5;
	cents %= 5;

	coin += cents / 2;
	cents %= 2;

	coin += cents;

	printf("%d\n", coin);

	return (0);
}
