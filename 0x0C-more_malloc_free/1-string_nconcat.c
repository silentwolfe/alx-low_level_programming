#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenates two strings
 * @s1: The beginning string
 * @s2: The appending string
 * @n: The number of bytes
 * Return: The function returns the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	unsigned int len2;
	int combo;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	combo = len1 + n;

	str = (char *)malloc((combo + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);
	strncat(str, s2, n);
	return (str);
}
