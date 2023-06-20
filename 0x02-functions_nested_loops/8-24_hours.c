#include "main.h"

/**
 * jack_bauer - This functions prints every minuts and seconds and hour of the day
 * Return: integer prototype
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		int H = i / 10;
		int h = i % 10;
		for (j = 0; j < 60; j++)
		{
			int M = j / 10;
			int m = j % 10;
			_putchar(H + '0');
			_putchar(h + '0');
			_putchar(':');
			_putchar(M + '0');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
				
