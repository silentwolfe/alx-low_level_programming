#include "main.h"

/**
 * _memcpy - This function copies a block of memory from
 * one location to another
 * @dest: The destination location where the data will
 * be copied to
 * @src: The source location where the data is copied from
 * @n: The number of bytes to copy
 * Return: The return value of memcpy() is a pointer to the
 * destination location
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
