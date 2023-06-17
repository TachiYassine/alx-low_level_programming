#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number in variable n
 *        And print the last digit from this number
 *        whether it is greater than 5 or less than 6 or equal 0.
 *
 * Return: always 0.
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10 ;
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n , last_digit);
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n , last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
        {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n , last_digit);
        }
	return (0);
}
