#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		if (alpha == 'z')
		{
			putchar('\n');
		}
		alpha++;
	}

	return (0);
}
