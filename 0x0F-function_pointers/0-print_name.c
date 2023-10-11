#include "function_pointers.h"
/**
 *print_name - prints a string
 *@name: pointer to string
 *@f: pointer to print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	void (*P)(char *);

	P = f;
	P(name);
}
