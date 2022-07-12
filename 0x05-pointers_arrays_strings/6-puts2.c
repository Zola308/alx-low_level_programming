#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every character of a string
 *
 * @str: The string to be passed
 *
 * Return: no return value
 *
 */

void puts2(char *str)
{
int i = 0;
while (i >= 0)
{
if (str[i] == '\0')
{
_putchar('\n');
break;
}
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
}

