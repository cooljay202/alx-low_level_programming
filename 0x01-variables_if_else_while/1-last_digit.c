#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the last digit of n
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is less than 6\n", n);
	}
	return (0);
}

