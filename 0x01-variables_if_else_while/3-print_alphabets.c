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

	while (alpha != ('Z' + 1))
	{
		putchar(alpha);
		if (alpha == 'z')
		{
			alpha = 'A' - 1;
		}
		if (alpha == 'Z')
		{
			putchar('\n');
		}
		alpha++;
	}

	return (0);
}
