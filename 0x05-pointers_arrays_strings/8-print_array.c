#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints elements of an array
 *
 * @a: The integer array
 *
 * @n: The number of array elements
 *
 */

void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}

