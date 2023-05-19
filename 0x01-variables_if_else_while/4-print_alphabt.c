#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lowercase wxcept q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowerChar = 'a';

	while (lowerChar <= 'z')
	{
		if (lowerChar != 'e' && lowerChar != 'q')
			putchar(lowerChar);
		lowerChar++;
	}
	putchar('\n');
	return (0);
}
