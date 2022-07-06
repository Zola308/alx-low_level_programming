#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @l: the character to be checked
 *
 * Return: Returns the last digit of l
 */

int print_last_digit(int l)
{
int n = l % 10;

if (n < 0)
{
n *= -1;
_putchar(n + 48);
return (n);
}
else
{
_putchar(n + 48);
return (n);
}
}
