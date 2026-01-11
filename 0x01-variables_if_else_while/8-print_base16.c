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

	while (alpha != ('f' + 1))
	{
		putchar(alpha);
		if (alpha == '9')
		{
			alpha = 'a' - 1;
		}
		if (alpha == 'f')
		{
			putchar('\n');
		}
		alpha++;
	}

	return (0);
}
