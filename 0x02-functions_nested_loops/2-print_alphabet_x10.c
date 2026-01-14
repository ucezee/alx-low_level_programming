#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Return: 0 (always Success)
 */
void print_alphabet_x10(void)
{
	int count;

	count = 0;

	while (count < 10)
	{
		print_alphabet();
		count ++;
	}
}



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
