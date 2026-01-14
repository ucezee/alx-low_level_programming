#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @c: integer to be evaluated
 *
 * Return: onsuccess last digit of evaluated integer
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		_putchar('0' + (-c % 10));
		return (-c % 10);
	}
	else
	{
		_putchar('0' + (c % 10));
		return (c % 10);
	}
}
