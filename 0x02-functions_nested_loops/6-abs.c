#include "holberton.h"

/**
 * _abs - shows absolute value of a number
 *@x: integer
 * Return: absolute value
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}

}
