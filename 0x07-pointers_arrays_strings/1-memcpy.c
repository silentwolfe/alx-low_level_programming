#include "main.h"
/**
 * _memcpy - This function copies the memory area,
 * with this both variables should have the same data
 * @dest: This is a pointer to the destination memory
 * area where the bytes will be copied to
 * @src: This is a pointer to the source memory area
 * where the bytes will be copied from
 * @n: This is the specified number of bytes to be
 * copied to the dest memory area
 * Return: dest (success);
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
