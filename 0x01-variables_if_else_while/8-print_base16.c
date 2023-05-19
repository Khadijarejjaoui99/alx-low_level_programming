#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowerChar = 'a', digitChar = '0';

	while (digitChar <= '9')
	{
		putchar(digitChar);
		digitChar++;
	}
	while (lowerChar <= 'f')
	{
		putchar(lowerChar);
		lowerChar++;
	}
	putchar('\n');
	return (0);
}
