#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical otherwise return 0
 * @s1: string
 * @s2: string
 * Return: 1 if identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
return (0);
}
