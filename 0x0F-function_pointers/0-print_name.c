#include "function_pointers.h"

/**
 * print_name - Prints out a name.
 * @name: The name to be printed.
 * @f: A pointer to the function.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}
