#include "main.h"

/**
 * string_toupper - This function changes a lowercase letter to
 * uppercase
 * @str: Represents the first string.
 *
 * Return: void.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
