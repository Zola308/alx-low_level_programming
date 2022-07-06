#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 for success
 */

int main(void)
{
int n;
long int num1, num2, fn;
num1 = 1;
num2 = 2;
printf("%ld, %ld", num1, num2);
for (n = 0; n < 48; n++)
{
fn = num1 + num2;
printf(", %ld", fn);
num1 = num2;
num2 = fn;
}
printf("\n");
return (0);
}
