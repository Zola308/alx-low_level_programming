#include <stdio.h>

/**
 *print_alphabet - prints to string
 *
 *Description: Prints alphabets in lowercase
 */
#include "main.h"
void print_alphabet(void)

{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');

return;
}
