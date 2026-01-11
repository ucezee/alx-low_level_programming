#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (always Success)
 */
int main(void)
{
	int int1;
	int int2;

	int1 = 48;
	int2 = 48;

	while (int1 <= 57)
	{
		while (int2 <= 57)
		{
			if (int1 < int2)
			{
				if ((int1 == 48) && (int2 == 49))
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				putchar (int1);
				putchar (int2);

			}
			int2++;
		}
		int2 = 48;

		int1++;
	}
	putchar ('\n');

	return (0);
}
