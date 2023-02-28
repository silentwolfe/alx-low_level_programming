#include "main.h"
/**
 * swap_int - This function that swaps the values of two integers.
 * @a: prototype declaration
 * @b: prototype declaration
 *
 * Return: (0);
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
