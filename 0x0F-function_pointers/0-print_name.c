#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name will be printed.
 * @f: the pointer to function that will print the name.
 *
 * Return: Void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
