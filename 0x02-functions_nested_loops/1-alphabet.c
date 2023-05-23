#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
*/

void print_alphabet(void)
{
	int lower_char = 'a';

	while (lower_char <= 'z')
	{
		_putchar(lower_char);
		lower_char++;
	}
	_putchar('\n');
}
