#include "main.h"
/**
 * _strcat - This function concatenates a string
 * @dest: This is a pointer to the destination array which
 * should contain a C string and should be large enough to
 * contain the concatenated resulting string.
 * @src: This is  the string to be appended. This should
 * not overlap the destination
 * Return: The strcat() function returns dest,
 * the pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
