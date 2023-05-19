#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowerChar = 'a', upperChar = 'A';

	while (lowerChar <= 'z')
	{
		putchar(lowerChar);
		lowerChar++;
	}
	while (upperChar <= 'Z')
	{
		putchar(upperChar);
		upperChar++;
	}
	putchar('\n');
	return (0);
}
