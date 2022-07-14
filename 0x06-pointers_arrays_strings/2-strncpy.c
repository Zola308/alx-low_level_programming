#include "main.h"

/**
 * _strncpy - copies a string and works like splice in js
 *
 * @dest: The first string
 *
 * @src: The string to be copied
 *
 * @n: the position to start copying
 *
 * Return: a pointer to dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}

