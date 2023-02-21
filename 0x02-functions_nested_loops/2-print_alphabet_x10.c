#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
int ten;
char ka;

for (ten = 0; ten <= 9; ten++)
{
for (ka = 'a'; ka <= 'z'; ka++)
_putchar(ka);

_putchar('\n');
}
}
