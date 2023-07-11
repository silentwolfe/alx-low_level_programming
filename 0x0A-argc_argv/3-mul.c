#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
