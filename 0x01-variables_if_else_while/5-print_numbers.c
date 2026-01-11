#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	int alpha;

	alpha = 0;

	while (alpha < 10)
	{
		putchar(alpha);
		if (alpha == 9)
		{
			putchar('\n');
		}
		alpha++;
	}

	return (0);
}
