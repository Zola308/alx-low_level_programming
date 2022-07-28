#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: an integer that indicates the memory
 *
 * Return: no return
 *
 */

void *malloc_checked(unsigned int b)
{
char *r;
r = malloc(b);
if (r == NULL)
exit(98);
return (r);
}

