#include "./function_pointers.h"
/**
 * print_name - prints a name
 * name - pointer to name string
 * f - pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;
	p(name);
}
