#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable
 * n each time it is executed.
 * Complete the source code in order to print the last digit
 * of the number stored in the variable n.
 *
 * Return: returns 0 is success else wrong
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
