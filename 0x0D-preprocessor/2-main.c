#include <stdio.h>

/**
 * main - This is a function thats prints the name of the file
 * it was compiled from
 * Return: (0 as success) && (1 or any number but 0 as failure)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
