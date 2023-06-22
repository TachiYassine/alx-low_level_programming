#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = test_islower('H');
    _putchar(r + '0');
    r = test_islower('o');
    _putchar(r + '0');
    r = test_islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
