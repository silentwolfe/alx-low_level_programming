#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - This function catenates two strings together
 * @s1: The destination to where appendation occurs
 * @s2: The string appended to the s1 string
 * Return: Returns the pointer of the two combined strings
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t combo;
	char *result;
	size_t i;

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
	combo = len1 + len2;

	result = (char *)malloc((combo + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[combo] = '\0';

	return (result);
}
