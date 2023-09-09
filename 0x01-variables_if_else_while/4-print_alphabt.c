#include <stdio.h>
/**
 *main - Starting point.
 *Return: 0 when successful.
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
