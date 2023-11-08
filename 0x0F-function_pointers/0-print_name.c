#include "function_pointers.h"

/**
 * print_name - Prints a string
 * @name: String to print
 * @f: Pointer to function which dictates how name is printed
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
