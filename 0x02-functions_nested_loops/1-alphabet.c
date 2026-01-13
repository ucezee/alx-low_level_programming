#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry Point
 *
 * Return: 0 (always Success)
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		if (alpha == 'z')
		{
			_putchar('\n');
		}
		alpha++;
	}
}
