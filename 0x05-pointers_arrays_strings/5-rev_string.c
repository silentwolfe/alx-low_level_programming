#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @str: prototype declaration
 * Return: return integer
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - This is a program that prints a
 * string in reverse
 * @s: prototype declaration
 * Return: void;
 */

void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
