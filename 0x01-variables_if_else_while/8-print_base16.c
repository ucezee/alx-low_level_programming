#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	char alpha;

	alpha = '0';

	while (alpha != ('e' + 1))
	{
		putchar(alpha);
		if (alpha == '9')
		{
			alpha = 'a' - 1;
		}
		if (alpha == 'e')
		{
			putchar('\n');
		}
		alpha++;
	}

	return (0);
}
