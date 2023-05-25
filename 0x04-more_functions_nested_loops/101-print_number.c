#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 */
void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10 > 0)
		print_number(x / 10);
	_putchar((x % 10) + 48);
}