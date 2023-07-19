#include "function_pointers.h"
#include <stdlib.h>
/**
 *    print_name - Prints a name using a given function pointer
 *   @name: Pointer to the name string
 *    @f: Function pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);

}
