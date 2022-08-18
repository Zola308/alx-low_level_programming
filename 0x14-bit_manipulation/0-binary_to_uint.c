#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: a string of 1 and 0s
 *
 * Return: the converted number or 0 if
 * there are 1 or more characters in b that is neither 0 nor 1
 * and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int j = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	for (i--, a = 1; i >= 0; i--, a *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			j += a;
		}
	}
	return (j);
}
