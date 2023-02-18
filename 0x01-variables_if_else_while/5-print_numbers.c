#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
