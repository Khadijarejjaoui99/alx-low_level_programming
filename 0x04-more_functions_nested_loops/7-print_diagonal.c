#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 * @n: The number of times the character \  should be printed
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
