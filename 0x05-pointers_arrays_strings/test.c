#include <stdio.h>
int main(void)
{
	char s[] = {"hallo"};
	char *p = s;
	int len = 0;
	
	while (*p == s[len])
	{
		p++;
		len++;

		putchar(s[len]);
	}

}
