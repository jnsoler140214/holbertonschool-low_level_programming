#include "holberton.h"

/**
 * jack_bauer - 24 hours format
 *
 * Return : none
 */

void jack_bauer(void)
{

	int h, m, x;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			x = h / 10;
			_putchar('0' + x);
			x = h % 10;
			_putchar('0' + x);
			_putchar(':');
			x = m / 10;
			_putchar('0' + x);
			x = m % 10;
			_putchar('0' + x);
			_putchar('\n');
			m++;
		}
		h++;

	}


}
