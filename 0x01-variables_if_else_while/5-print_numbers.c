#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char digitChar = '0';

	while (digitChar <= '9')
	{
		putchar(digitChar);
		digitChar++;
	}
	putchar('\n');
	return (0);
}
