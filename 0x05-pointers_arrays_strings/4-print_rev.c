#include <stdio.h>
#include "main.h"

/**
 * print_rev - Reverses a string and prints it
 *
 * @s: The string to be reversed
 *
 * Return: no return value
 *
 */

void print_rev(char *s)
{
int i = 0;
while (i >= 0)
{
if (s[i] == '\0')
break;
i++;
}
for (i--; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

