#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 *
 * @n: the count
 *
 * Return: the sum and 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum;
va_start(ap, n);
sum = 0;
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(ap, int);
}
va_end(ap);
return (sum);
}

