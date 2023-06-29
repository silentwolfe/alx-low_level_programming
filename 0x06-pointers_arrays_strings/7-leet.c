#include "main.h"

/**
 * leet- This function capitalizes all strings
 * @str: Represents the first string.
 *
 * Return: char.
 */

char *leet(char *str)
{
	char *leetChars = "AEOTL";
	char *leetReplacements = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j] || str[i] == leetChars[j] + 32)
			{
				str[i] = leetReplacements[j];
				break;
			}
		}
	}

	return (str);
}
