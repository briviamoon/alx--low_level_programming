#include "main.h"

/**
 * actual_sqrt - finds the sqrt of a number
 * @n: inter subject.
 * @rand: random guess.
 * Return: the natural squareroot of n.
*/

int actual_sqrt(int n, int rand)
{
	if (rand * rand == n)
	{
		return (rand);
	}
	else if (rand * rand > n)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt(n, rand + 1));
	}
}
