#include "function_pointers.h"
/**
 *print_name - prints a string
 *@name: pointer to string
 *@f: pointer to print function
 */

void print_name(char *name, void (*f)(char *))
{
	void (*P)(char *);

	if (name == NULL || f == NULL)
	{
		return;
	}

	P = f;
	P(name);
}
