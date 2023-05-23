#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
*/

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * j;
			if (product <= 9)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
