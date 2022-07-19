#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 *
 * @c: the regex character
 *
 * Return: a pointer to the character in the string if found
 *
 * and a pointer to the null terminator if not found
 *
 */

char *_strchr(char *s, char c)
{
int i = 0, j;
while (i >= 0)
{
if (s[i] == '\0')
break;
i++;
}
for (j = 0; j <= i; j++)
{
if (*(s + j) == c)
return (s + j);
}
return ('\0');
}

