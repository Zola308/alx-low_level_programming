#include <stdio.h>
#include "main.h"

/**
 * _strlen - Prints the length of a string
 *
 * @s: The character whose length we will count
 *
 * Return: The length of the string
 *
 */

int _strlen(char *s)

{

		int len = 0;



			while (*(s + len) != '\0')

						len++;

				return (len);

}

