#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: a pointer that points to a newly allocated space in memory
 *
 * which contains the contents of s1,
 *
 * followed by the contents of s2, and null terminated
 *
 * return NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, size;
char *conc;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (i >= 0)
{
if (s1[i] == '\0')
break;
i++;
}
j = 0;
while (j >= 0)
{
if (s2[j] == '\0')
break;
j++;
}
size = i + j + 1;
conc = malloc(sizeof(char) * size);
if (conc == NULL)
{
free(conc);
return (NULL);
}
for (k = 0; k < i; k++)
conc[k] = s1[k];
for (j = 0; j < (size - i - 1); k++, j++)
conc[k] = s2[j];
return (conc);
}

