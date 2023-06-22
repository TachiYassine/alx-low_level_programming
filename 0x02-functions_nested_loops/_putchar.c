#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character a as output
 * a: The character to print
 *
 * Return: On success 1.
 * On error -1.
 */


int _putchar(char a){

	return (write(1, &a, 1));
}
