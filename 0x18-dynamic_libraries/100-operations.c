#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function takes two integers as parameters and returns their sum.
 * Return: Sum of @a and @b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function takes two integers as parameters and returns their difference.
 * Return: Result of subtracting @b from @a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function takes two integers as parameters and returns their product.
 * Return: Product of @a and @b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: Numerator.
 * @b: Denominator.
 *
 * This function takes two integers as parameters and returns their quotient.
 * If @b is 0, an error message is printed, and 0 is returned.
 * Return: Result of dividing @a by @b.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: Dividend.
 * @b: Divisor.
 *
 * This function takes two integers as parameters and returns their remainder.
 * If @b is 0, an error message is printed, and 0 is returned.
 * Return: Remainder of dividing @a by @b.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
