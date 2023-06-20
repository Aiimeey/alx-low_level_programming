#include <unistd.h>
#include "main.h"
/**
* main -  prints _putchar
*
* Return: Always 0
*/
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
	return (0);

}
