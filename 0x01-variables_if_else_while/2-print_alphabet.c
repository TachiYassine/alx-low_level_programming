#include <stdio.h>

/**
 * main - prints the alphabets in one line.
 *
 * return: always 0.
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
