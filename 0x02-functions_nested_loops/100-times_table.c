#include "main.h"
#include <stdlib.h>
/**
 * print_number - function to print mumbers
 *
 * a: number to be printed
 *
 */
void print_number(int a)
{
	int c = abs(a);

	if (a < 0)
	{
		_putchar('-');
	}
	if (c < 10)
	{
		_putchar('0' + c);
	}
	else
	{
		print_number(c / 10);
		_putchar('0' + (c % 10));
	}
}


/**
 * print_times_table - Entry
 *
 * Return: Null
 */
void print_times_table(int a)
{
	if ((a > 15) || (a < 0))
	{
	}
	else
	{
		int f, s, res;

		f = 0;
		while (f < (a + 1))
		{
			s = 0;
			while (s < (a + 1))
			{
				res = f * s;
				if ((s != 0))
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10)
				{
					if (s != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					print_number(res);
				}
				else if (res < 100)
				{
					_putchar(' ');
					_putchar(' ');
					print_number(res);
				}
				else if (res < 1000)
				{
					_putchar(' ');
					print_number(res);
				}
				else
				{
					print_number(res);
				}
				s++;
			}
		
			_putchar('\n');
			f++;
		}
	}
}
