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

char *_strcat(char *dest, char *src) {
	size_t i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i+j] = src[j];
	}

	dest[i+j] = '\0';

	return dest;
}
