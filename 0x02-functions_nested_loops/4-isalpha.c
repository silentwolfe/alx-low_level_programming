#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 * @c: integer prototype
 * Return: return 1 if success else failure
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
		return (0);
}
