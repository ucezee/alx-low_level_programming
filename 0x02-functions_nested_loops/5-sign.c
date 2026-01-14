#include "main.h"

/**
 * print_sign - Entry Point
 * @c: character to be evaluated
 *
 * Return: 0 (always Success)
 */
int print_sign(int c)
{
	/* your code goes there */
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
