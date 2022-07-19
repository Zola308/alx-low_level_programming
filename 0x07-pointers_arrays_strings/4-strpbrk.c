#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 *
 * of any of the bytes in the string accept
 *
 * @s: The string
 *
 * @accept: sort of like a regex
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
int n = 0, b;
int m = 0, a;
while (n >= 0)
{
if (s[n] == '\0')
break;
n++;
}
while (m >= 0)
{
if (accept[m] == '\0')
break;
m++;
}
for (b = 0; b < n; b++)
{
for (a = 0; a < m; a++)
{
if (s[b] == accept[a])
{
return (s + b);
}
}
}
return ('\0');
}

