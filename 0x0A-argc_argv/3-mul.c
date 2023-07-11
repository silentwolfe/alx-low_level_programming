#include <stdlib.h>

/**
 * main - This function prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success else failure
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}
