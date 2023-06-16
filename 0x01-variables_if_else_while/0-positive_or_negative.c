#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
 * Main - The output of the program should be positive or negative
 * according to random numbem that stored in variable n
 *
 * Return always zero
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	return (0);
}
