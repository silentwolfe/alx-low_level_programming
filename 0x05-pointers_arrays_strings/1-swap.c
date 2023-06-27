#include "main.h"

/**
 * swap_int - This program swaps two integers
 * @a: prototype declaration
 * @b: prototype declaration
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
