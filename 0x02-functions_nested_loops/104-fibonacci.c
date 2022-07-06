#include <stdio.h>

/**
 * main - Print the first 98 fibonacci numbers
 *
 * Return: always 0 for success
 */

int main(void)
{
int n, check1, check2;
long int num1, num2, fn, num11, num22, fn2;
num1 = 1;
num2 = 2;
check1 = check2 = 1;
printf("%ld, %ld", num1, num2);
for (n = 0; n < 96; n++)
{
if (check1)
{
fn = num1 + num2;
printf(", %ld", fn);
num1 = num2;
num2 = fn;
}
else
{
if (check2)
{
num11 = num1 % 1000000000;
num22 = num2 % 1000000000;
num1 = num1 / 1000000000;
num2 = num2 / 1000000000;
check2 = 0;
}
fn2 = num11 + num22;
fn = num1 + num2 + (fn2 / 1000000000);
printf(", %ld", fn);
printf("%ld", fn2 % 1000000000);
num1 = num2;
num11 = num22;
num2 = fn;
num22 = (fn2 % 1000000000);
}
if (((num1 + num2) < 0) && check1 == 1)
check1 = 0;
}
printf("\n");
return (0);
}
