#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: The first string
 *
 * @s2: The other string
 *
 *
 * Return: Always ret.
 *
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, ret = 0;
while (ret == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
ret = *(s1 + i) - *(s2 + i);
i++;
}
return (ret);
}

