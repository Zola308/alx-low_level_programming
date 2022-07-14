#include "main.h"

/**
 * rot13 - encodes a string with rot13
 *
 * @s: the string
 *
 * Return: the encoded string
 *
 */

char *rot13(char *s)
{
int count = 0, j;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (s[count] != '\0')
{
for (j = 0; j < 52; j++)
{
if (s[count] == alpha[j])
{
s[count] = rot[j];
break;
}
}
count++;
}
return (s);
}

