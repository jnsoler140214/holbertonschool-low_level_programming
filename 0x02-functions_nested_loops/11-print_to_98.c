#include "holberton.h"

/**
 * print_to_98 - all numbers to 98
 * @n: var int
 * Return : none
 */

void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}

	}
	printf("%d\n", 98);

}