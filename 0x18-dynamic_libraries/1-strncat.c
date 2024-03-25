#include "main.h"

/**
 * _strncat - This function concatenates a string
 * @dest: This is a pointer to the destination array which
 * should contain a C string and should be large enough to
 * contain the concatenated resulting string.
 * @src: This is  the string to be appended. This should
 * not overlap the destination
 * @n: specifies the number of bytes to be copied by src
 * and dest
 * Return: The strcat() function returns dest,
 * the pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (original_dest);
}
