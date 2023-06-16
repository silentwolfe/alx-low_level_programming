#include <stdio.h>

/**
 * main - This program prints the different sizes of differnt
 * variable types on bith the 64bit and 32bit machine
 *
 * Return: return 0 is successful else unsuccessful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
