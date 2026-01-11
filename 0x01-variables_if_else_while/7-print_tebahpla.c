#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		if (alpha == 'a')
		{
			putchar('\n');
		}
		alpha--;
	}

	return (0);
}
