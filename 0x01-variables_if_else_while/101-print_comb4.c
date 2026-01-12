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
	int int3;

	int1 = 48;
	int2 = 48;
	int3 = 48;
	while (int1 <= 57)
	{
		while (int2 <= 57)
		{
			while (int3 <= 57)
			{
				if ((int1 < int2) && (int2 < int3))
				{
					if ((int1 == 48) && (int2 == 49) && (int3 == 50))
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					putchar (int1);
					putchar (int2);
					putchar (int3);

				}
				int3++;
			}
			int3 = 48;
			int2++;
		}
		int2 = 48;
		int1++;
	}
	putchar ('\n');
	return (0);
}
