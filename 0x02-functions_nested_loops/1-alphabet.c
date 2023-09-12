#include "main.h"

/**
 *print_alphabet - prints alphabets.
 *Return: 0 when success.
 */

void print_alphabet(void)
{
	char small_letter = 'a';

	while (small_letter <= 'z')
	{
		_putchar(small_letter);
		small_letter++;
	}
	_putchar("\n");
}
