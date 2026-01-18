#include <stdio.h>

/**
 * add - function to add two numbers
 *
 * Return: result of computation
 */
int main(void)
{
	int sum, count;

	sum = 0;
	count = 0;
	while (count < 1024)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
