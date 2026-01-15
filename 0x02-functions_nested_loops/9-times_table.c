#include "main.h"

/**
 * times_table - Entry
 *
 * Return: Null
 */
void times_table(void)
{
	int f, s, res;

	f = 0;
	while (f < 10)
	{
		s = 0;
		while (s < 10)
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
				}
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			s++;
		}
		_putchar('\n');
		f++;
	}
}
