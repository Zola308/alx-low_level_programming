#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: First string
 *
 * @src: The second string
 *
 * Return: a pointer to the returning string dest
 *
 */

char *_strcat(char *dest, char *src)

{

		int i = 0, j = 0;





			while (*(dest + i) != '\0')

					{

								i++;

									}

				while (j >= 0)

						{

									*(dest + i) = *(src + j);

											if (*(src + j) == '\0')

															break;

													i++;

															j++;

																}

					return (dest);

}

