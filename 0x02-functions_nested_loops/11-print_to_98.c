#include "main.h"
#include <stdlib.h>

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

void print_to_98(int c)
{
	int num;

	num = c;

	if (num > 98)
	{
		print_number(num);
		while (num > 98)
		{
			_putchar(',');
			_putchar(' ');
			num--;
			print_number(num);
		}
	}
	else if (num < 98)
	{
		print_number(num);
		while (num < 98)
		{
			_putchar(',');
			_putchar(' ');
			num++;
			print_number(num);
		}

	}
	else
	{
		print_number(num);
	}
	_putchar('\n');
}
