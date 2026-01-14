#include "main.h"

/**
 * _abs - Entry Point
 * @c: character to be evaluated
 *
 * Return: 0 (always Success)
 */
int _abs(int c)
{
	/* your code goes there */
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (0);
	}

}
