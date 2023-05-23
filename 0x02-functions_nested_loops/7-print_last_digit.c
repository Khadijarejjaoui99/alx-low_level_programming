#include "main.h"

/**
 * print_last_digit - A function that print the last digit
 * @n: is the parameter
 *
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
		last_digit = n % 10;
	else
		last_digit = -1 * (n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
