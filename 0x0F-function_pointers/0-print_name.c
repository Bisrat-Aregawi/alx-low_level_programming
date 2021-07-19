#include "function_pointers.h"

/**
 * print_name - Function sends strings to a function passed as an argument
 * @name: A name string
 * @f: A pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
