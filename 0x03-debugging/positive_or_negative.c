#include <stdio.h>
#include "main.h"

/**
 * main - test function that prints if integer is positive or negative.
 * Return: Always 0.
*/

void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else
	printf("%i is negative\n", n);
}
