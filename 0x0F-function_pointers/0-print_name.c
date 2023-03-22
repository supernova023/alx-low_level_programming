#include "function_pointers.h"

/**
 * print_name - print name using given function
 * @name: name to print
 * @f: function to use to print name
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
