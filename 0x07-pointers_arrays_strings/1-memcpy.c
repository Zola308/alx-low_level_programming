#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area src to a memory area dest
 *
 * @dest: The destination memory
 *
 * @src: The source memory
 *
 * @n: the bytes to be copied
 *
 * Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for ( ; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}

