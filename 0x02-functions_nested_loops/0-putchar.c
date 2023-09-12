#include "main.h"
/**
 *main - Start of process.
 *Return: 0 when positive.
 */

int main(void)
{
	char array[7] = "_putchar";
	int counter = 0;

	while (counter <= 7)
	{
		putchar(array[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
