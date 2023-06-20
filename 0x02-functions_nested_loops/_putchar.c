#include "main.h"
#include <unisd.h>


/**
 * _putchar - write the characterr c to the stdout
 * @c: the character to print
 *
 * Return: On Success
 */
int _putchar(char c)
{
	return (write(1, &c, c));
}

