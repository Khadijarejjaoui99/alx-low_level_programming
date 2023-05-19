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
	char lowerChar = 'z';

	while (lowerChar >= 'a')
	{
		putchar(lowerChar);
		lowerChar--;
	}
	putchar('\n');
	return (0);
}
