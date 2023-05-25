#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	 long int  number = 612852475143, largest_factor = 2, i;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number /= i;
			largest_factor = i;
		}
	}
	printf("%lu\n", largest_factor);
	return (0);

}
