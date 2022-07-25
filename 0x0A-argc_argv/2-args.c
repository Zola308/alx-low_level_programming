#include <stdio.h>

/**
 * main -  prints all arguments it receives
 *
 * @argc: the argument count
 *
 * @argv: the argument vector
 *
 * Return: 0 - Success
 *
 */

int main(int argc, char *argv[])
{
int a = 0;
while (a < argc)
{
printf("%s\n", argv[a]);
a++;
}
return (0);
}

