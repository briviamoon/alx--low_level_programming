#include<stdio.h>
/**
 *main - Starting point.
 *Return: 0 if success.
 */

int main(void)
{
	char hex = '0';
	char hax = 'a';

	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	while (hax <= 'f')
	{
		putchar(hax);
		hax++;
	}
	putchar('\n');
	return (0);
}
