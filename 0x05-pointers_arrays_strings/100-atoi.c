#include "main.h"

/**
 * _atoi - This function converts a string to an integer
 * @s: prototype declaration
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-') {
		sign = -1;
		s++;
	} else if (*s == '+') {
		s++;
	}

	while (*s != '\0') {
		if (*s >= '0' && *s <= '9') {
			num = num * 10 + (*s - '0');
		} else {
			break;
		}
		s++;
	}

	return (sign * num);
}
