#include<stdio.h>
/**
 *main- Starting point.
 *Return: 0 when succesfull.
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
