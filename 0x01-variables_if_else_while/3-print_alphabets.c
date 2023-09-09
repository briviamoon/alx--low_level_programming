#include <stdio.h>
/**
 *main - start of process.
 *Return: 0 when successful.
 */

int main(void)
{
	char low = 'A';
	char up = 'a';

	while (up <= 'z')
	{
		putchar(up);
		up++;
	}
	while (low <= 'Z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
