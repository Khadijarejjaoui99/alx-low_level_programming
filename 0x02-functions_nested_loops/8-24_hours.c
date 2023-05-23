#include "main.h"

/**
 *  jack_bauer - a function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int d1 = 0, d2;

	while (d1 <= 23)
	{
		d2 = 0;
		while (d2 <= 59)
		{
			_putchar('0' + d1 / 10);
			_putchar('0' + d1 % 10);
			_putchar(':');
			_putchar('0' + d2 / 10);
			_putchar('0' + d2 % 10);
			d2++;
			_putchar('\n');
		}
		d1++;
	}
}
