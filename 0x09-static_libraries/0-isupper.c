#include "main.h"

/**
 * _isupper - check if uppercase letter
 * @n: char to check
 *
 * Return: if uppercase return 1, if not return 0
 */
int _isupper(int n)
{
	if (n > 'A' && n <= 'z')
		return (1);

	return (0);
}
