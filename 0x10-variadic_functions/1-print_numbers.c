#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: is the string to be printed between the integers
 *
 * @n: the number of integers passed into the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

