#include "main.h"

/**
 * print_numbers - print numbesr for 0 to 9
 * Return:Always 0
 */
void print_numbers(void)
{
	char x;

for (x = 0; x <= 9; x++)
	{
_putcher(x + '0');
	}
_putcher('\n');
}
