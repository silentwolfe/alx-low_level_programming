#include "main.h"
/**
 * print_number - This function prints number
 * @n: prototype def
 *
 * Return: returns integers
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - This functin prints all natural
 * numbers from n to 98, followed by a new line.
 *
 * @n: prototype def
 *
 * Return: returns an integer
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');

}
