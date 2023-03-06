#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - This function  finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: prototype declaration
 * @needle: prototype declaration (argument)
 * Return: &haystack;
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
