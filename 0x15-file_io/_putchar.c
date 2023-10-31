#include "main.h"

/**
 * _putchar - prints char to std out
 * @c: char
 * Return: bytes used.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
