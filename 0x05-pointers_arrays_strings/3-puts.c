#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 *
 * @str: The string to be printed
 *
 * Return: no return
 *
 */

void _puts(char *str)
{
int i = 0;
while (i >= 0)
{
if (*(str + i) == '\0')
{
_putchar('\n');
break;
}
_putchar(str[i]);
i++;
}
}

