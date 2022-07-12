#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: no return
 *
 */

void rev_string(char *s)
{
int i = 0;
int a, b;
char *rev, t;
while (i >= 0)
{
if (s[i] == '\0')
{
break;
}
i++;
}
rev = s;
for (a = 0; a < (i - 1); a++)
{
for (b = a + 1; b > 0; b--)
{
t = *(rev + b);
*(rev + b) = *(rev + (b - 1));
*(rev + (b - 1)) = t;
}
}
}

