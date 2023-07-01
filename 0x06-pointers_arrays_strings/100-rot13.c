#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: string
 * Return: char
 */


char *rot13(char *n)
{
	int i = 0, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (n[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alpha[j])
			{
				n[i] = alpharot[j];
				break;
			}
		}
		i++;
	}
	return (n);
}

