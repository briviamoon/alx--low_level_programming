#include <stdio.h>
/**
 *main - Start of process.
 *Return: 0 if successful.
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
