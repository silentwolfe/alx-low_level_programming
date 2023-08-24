#include "main.h"
#include <limits.h>

/**
 * _atoi - This function converts a string to an integer
 * @s: prototype declaration
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}
	
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (num > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		num = num * 10 + digit;
		s++;
	}

	return (sign * num);
}
