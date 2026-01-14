#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry Point
 *
 * @c: value to be checked
 *
 * Return: 0 (always Success)
 */
int _islower(int c)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == c)
		{
			return (1);
		}
		alpha++;
	}
	return (0);
}
