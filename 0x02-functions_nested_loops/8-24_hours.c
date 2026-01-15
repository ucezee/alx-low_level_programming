#include "main.h"

/**
 * jack_bauer - Entry
 *
 * Return: Null
 */
void jack_bauer(void)
{
	int f, s, ff, fs, sf, ss;

	f = 0;
	while (f < 24)
	{
		s = 0;
		while (s < 60)
		{
			ff = f / 10;
			fs = f % 10;
			sf = s / 10;
			ss = s % 10;
			_putchar('0' + ff);
			_putchar('0' + fs);
			_putchar(':');
			_putchar('0' + sf);
			_putchar('0' + ss);
			_putchar('\n');
			s++;
		}
		f++;
	}
}
