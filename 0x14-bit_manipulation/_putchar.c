#include "main.h"
/**
 * _putchar - writes char to stdout
 * @c: char
 * Return: int num of bytes used
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
