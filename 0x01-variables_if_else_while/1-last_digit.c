#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number in variable n
 *	And print the last digit from this number
 *	whether it is greater than 5 or less than 6 or equal 0.
 *
 * Return: always 0.
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
