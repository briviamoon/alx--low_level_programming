#include "main.h"
/**
 *main - Start of process.
 *Return: 0 when positive.
 */

int main(void)
{
	char array[] = "_putchar";
	int counter = 0;

	while (counter <= 7)
	{
		_putchar(array[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
