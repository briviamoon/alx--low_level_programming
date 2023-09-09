#include<stdio.h>
/**
 *main - Start Process.
 *Return: 0 when succesfu.
 */

int main(void)
{
	int n = 0;
	int m = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 9 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
