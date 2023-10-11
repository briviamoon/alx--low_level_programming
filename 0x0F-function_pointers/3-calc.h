#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct operationformat - stucture of opearation
 * @operator: pointer to operator
 * @funct: function to be called
*/
typedef struct operationformat
{
	char *operator;
	int (*funct)(int a, int b);
} other_optns;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
