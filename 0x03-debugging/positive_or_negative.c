#include <stdio.h>

/**
 * positive_or_negative - prints whether the number is
 * positive or negative or zero
 * @i: number to check
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
