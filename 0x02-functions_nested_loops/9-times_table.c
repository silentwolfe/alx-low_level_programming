#include "main.h"

/**
 * times_table - Write a function that prints the 9 times
 * table, starting with 0.
 *
 * Return: return 0 as sucess else failure.
 */

void times_table(void)
{
	int rows = 10;
	int columns = 10;
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			int value = i * j;

			if (value <= 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
					_putchar(value + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
		
		}
	_putchar('\n');
	}

}
