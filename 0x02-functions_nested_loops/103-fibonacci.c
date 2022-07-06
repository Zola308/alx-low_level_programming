#include <stdio.h>

/**
 * main - Prints even fibonnaci numbers
 *
 * Return: Always 0 for success
 */

int main(void)

{
long int n;
long int num1, num2, fn;
num1 = 1;
num2 = 2;
fn = num1 + num2;
n = 2;
while (fn < 4000000)
{
if (fn % 2 == 0)
{
n = n + fn;
}
fn = num1 + num2;
num1 = num2;
num2 = fn;
}
printf("%ld\n", n);
return (0);
}
