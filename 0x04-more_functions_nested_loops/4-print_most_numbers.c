#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * Return:void
 */

void print_most_numbers(void)
{
char x = 0;

	for (x = '0'; x <= '9'; x++)
	{
	if (!(x == '2' || x == '4'))
	_putchar(x);
	}
	_putchar('\n');
}
