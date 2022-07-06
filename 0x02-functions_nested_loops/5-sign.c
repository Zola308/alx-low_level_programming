#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the character to be checked
 *
 * Return: returns 1, -1 and 0 for different signs
 */

int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
