#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @str: string to be printed in reverse
*/

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
