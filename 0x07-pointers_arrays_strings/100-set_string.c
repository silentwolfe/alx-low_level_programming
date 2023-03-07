#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * set_string - Entry point
 * @s: input
 * @to: input
 * Return: 0 success;
 */

void set_string(char **s, char *to)
{
	*s = malloc(strlen(to) + 1);
	strcpy(*s, to);
}
