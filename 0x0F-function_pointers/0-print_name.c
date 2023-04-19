#include <stdlib.h>
/**
 * print_name - Calls the function pointed to by f,
 * passing name as an argument
 *
 * @name: The name to be printed.
 * @f: A function pointer to a function that takes
 * a char * argument to print it and return void.
 *
 * Return: Void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
