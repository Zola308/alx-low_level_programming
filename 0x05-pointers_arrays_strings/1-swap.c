#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: The first integer
 *
 * @b: the second integer
 *
 * Return: no return
 *
 */

void swap_int(int *a, int *b)
{

int c = *a;

*a = *b;

*b = c;

}

