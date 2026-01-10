#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	int n;
	int n_mod_10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n_mod_10 = n % 10;

	if (n_mod_10 == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, n_mod_10);
	}
	else if (n_mod_10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_mod_10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_mod_10);
	}

	return (0);
}
