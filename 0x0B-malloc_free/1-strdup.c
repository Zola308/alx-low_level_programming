#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: NULL if str = NULL
 *
 * a pointer to the duplicated string.
 *
 * It returns NULL if insufficient memory was available
 *
 */

char *_strdup(char *str)
{
char *ch;
int size, j, i = 0;
if (str == NULL)
return (NULL);
while (i >= 0)
{
if (str[i] == '\0')
break;
i++;
}
size = i + 1;
ch = (char *)malloc(size * sizeof(char));
if (ch  == NULL)
return (NULL);
for (j = 0; j < size; j++)
ch[j] = str[j];
return (ch);
}

