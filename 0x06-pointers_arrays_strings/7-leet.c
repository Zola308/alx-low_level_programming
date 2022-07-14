#include "main.h"

/**
 * leet - it encodes a string into 1337
 *
 * @s: the string
 *
 * Return: the encoded string
 *
 */

char *leet(char *s)
{
int count = 0, j;
int low_letters[] = {97, 101, 111, 116, 108};
int upp_letters[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};
while (s[count] != '\0')
{
for (j = 0; j < 5; j++)
{
if (s[count] == low_letters[j] || (s[count] == upp_letters[j]))
{
s[count] = numbers[j];
break;
}
}
count++;
}
return (s);
}

