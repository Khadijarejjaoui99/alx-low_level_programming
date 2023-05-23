#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int i, lower_char;

	for (i = 0; i < 10; i++)
	{
		for (lower_char = 'a'; lower_char <= 'z'; lower_char++)
		{
			_putchar(lower_char);
		}
		_putchar('\n');
	}
}
