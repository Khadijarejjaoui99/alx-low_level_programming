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
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
