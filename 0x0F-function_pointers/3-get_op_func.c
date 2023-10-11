#include "3-calc.h"

/**
 * get_op_func - selects an operation depending on operator.
 * @s: pointer to the operator argument
 * Return: pointer to a operator function
 *			NULL if no function is detected.
*/

int (*get_op_func(char *s))(int, int)
{
	/*array of opt_t structures*/
	op_t operation[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (operation[i].op != NULL)
	{
		if ((*(operation[i].op) == *s) && (s[1] == '\0'))
		{
			return (operation[i].funct);
		}
		i++;
	}
	return (NULL);
}
