#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Program will assign a random number to the variable
 * each time its been executed and its prints out if the number
 * is either negative or positive
 *
 * Return: Returns 0 is success else wrong
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
                printf("%d is negative\n", n);
        return (0);
}
