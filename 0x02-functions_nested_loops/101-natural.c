#include <stdio.h>

/**
 * main - Prints the sum of all natural numbers below 1024
 *
 * Return: Always 0 for success
 */

int main(void)
{
int n;
int sum = 0;

for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
sum = sum + n;
}
}
printf("%d\n", sum);
return (0);
}
