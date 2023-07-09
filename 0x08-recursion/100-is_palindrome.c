#include "main.h"
#include <stdlib.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: original string.
 * Return: 1 if s equal to null otherwise return value of _is_palindrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	_strlen(s);
	return (_is_palindrome(s, s + (_strlen(s) - 1), (_strlen(s)), 0));
}

/**
 * _strlen - Computes the length of a string.
 * @sl: Pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *sl)
{
	if (*sl == '\0')
		return (0);
	sl++;
	return (1 + _strlen(sl));
}
/**
 * _is_palindrome - compares the characters pointed to by start and end
 * @start: A pointer to the starting character of the string
 * @end: A pointer to the ending character of the string
 * @len: The length of the string
 * @l: A counter used to track the progress of the recursive calls
 * Return: 1 if the string is a palindrome and 0 if it is not
 */
int _is_palindrome(char *start, char *end, int len, int l)
{

	if (*start == *end && *start != '\0')
	{
		start++;
		end--;
		return (_is_palindrome(start, end, len, l + 1));
	}
	if (*start != *end)
		return (0);

	return (1);

}
