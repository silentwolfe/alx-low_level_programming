#include "main.h"

/**
 * _strcpy - This function copies a string as it is
 * @dest: This declaration recieves the copied string
 * @str: This declaration sends the copied string to dest
 * Return: dest
 */

char *_strcpy(char *dest, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}
