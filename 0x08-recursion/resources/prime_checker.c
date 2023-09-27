#include "../main.h"

int prime_checker(int n, int rand)
{
	if (rand * rand > n)
	{
		return(1);
	}
	else if (n % rand == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, rand + 1));
	}
}
