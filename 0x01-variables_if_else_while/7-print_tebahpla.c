#include<stdio.h>
/**
 *main- Starting point.
 *Return: 0 when succesfull.
 */

int main(void)
{
	char case = 'z';

	while (case >= 'a')
	{
		putchar(case);
		case--;
	}
	putchar('\n');
	return (0);
}
