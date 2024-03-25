#include "main.h"

/**
 * _strncpy - This function concatenates a string
 * @dest: This is a pointer to the destination array which
 * should contain a C string and should be large enough to
 * contain the concatenated resulting string.
 * @src: This is  the string to be appended. This should
 * not overlap the destination
 * @n:This specifies the maximum number of characters
 * to be copied from src to dest.
 * Return: The strcat() function returns dest,
 * the pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
