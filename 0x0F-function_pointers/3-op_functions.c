#include "3-calc.h"

/**
 * op_add - performs addidtion
 * @a: value 1
 * @b: value 2
 * Return: result of addition
*/
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - subtracts values
 * @a: first value
 * @b: second value
 * Return: results
*/
int op_sub(int a, int b)
{
	int result;

	result = a - b;

	return (result);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st multiple
 * @b: 2nd multiple
 * Return: result
*/
int op_mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
 * op_div - divides to produce whole number
 * @a: denominator
 * @b: neumerator
 * Return: result
*/
int op_div(int a, int b)
{
	int result;

	result = a / b;

	return (result);
}

/**
 * op_mod - performs division to return remainder
 * @a: denominator
 * @b: neumerator
 * Return: result
*/
int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
