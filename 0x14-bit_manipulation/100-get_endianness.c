#include "main.h"
/**
 * get_endianness - checks endianness of system
 * Return: 1 for little endian
 *		0 for Big endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	if (*endianCheck == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
