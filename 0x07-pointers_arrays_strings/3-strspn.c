#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: The string
 *
 * @accept: The bytes on the substring
 *
 * Return:  the number of bytes in the initial segment of s
 *
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, a;
int j = 0, b;
unsigned int n = 0;
for ( ; i >= 0; i++)
{
if (*(s + i) == ' ')
break;
}
while (j >= 0)
{
if (*(accept + j) == '\0')
break;
j++;
}
for (b = 0; b < j; b++)
{
for (a = 0; a < i; a++)
{
if (*(accept + b) == *(s + a))
{
n = n + 1;
}
}
}
return (n);
}

