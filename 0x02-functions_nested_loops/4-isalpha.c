#include <stdio.h>
/**
 * _isalpha - Entry Point
 * @c: character to be evaluated
 *
 *
 * Return: 0 (always Success)
 */
int _isalpha(int c)
{
	char alpha;

	alpha = 'a';

	while (alpha != ('Z' + 1))
	{
		if (alpha == c)
		{
			return (1);
		}
		if (alpha == 'z')
		{
			alpha = 'A' - 1;
		}
		alpha++;
	}

	return (0);
}
