#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: string that receive the modification
 * @to: the string that will be copy in s
 */
void set_string(char **s, char *to)
{

	*s = to;
}
