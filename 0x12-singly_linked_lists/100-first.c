#include <stdio.h>
/**
 * func - Constructor function that prints a message before main().
 */
void func(void) __attribute__((constructor));

void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
