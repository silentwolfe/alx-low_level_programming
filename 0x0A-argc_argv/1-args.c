#include <stdio.h>

/**
 * main - This function prints the number of arguments passed into it
 * @argc: Argument counter
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
