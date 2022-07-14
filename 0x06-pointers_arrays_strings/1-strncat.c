#include "main.h"

/**
 * _strncat - convatenates two strings
 *
 * it will use at most n bytes from src; and
 *
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: The first string
 *
 * @src: The second string
 *
 * @n: The n bytes to be concatenated
 *
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
if (src[j] == '\0')
break;
i++;
j++;
}
return (dest);
}

