#include <string.h>
#include "main.h"
int is_palindrome_helper(char *s, int left, int right);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - recursive helper function for is_palindrome
 * @s: the string to check
 * @left: the leftmost index to compare
 * @right: the rightmost index to compare
 *
 * Return: 1 if the substring s[left..right] is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] != s[right])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, left + 1, right - 1));
	}
}
