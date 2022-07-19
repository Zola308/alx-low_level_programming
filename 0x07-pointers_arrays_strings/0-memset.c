#include "main.h"

/**
 * _memset - Fills bytes of the memory with constant bytes
 *
 * @s: The pointer to the memory
 *
 * @b: The byte expected to be constant
 *
 * @n: The memory byte
 *
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for ( ; i < n; i++)
{
*(s + i) = b;
}
return (s);
}

