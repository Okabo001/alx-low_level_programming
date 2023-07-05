#include "main.h"

/**
 * _pow_recursion -  Returns the value of x raise to the the power of y
 * @x: the value to multiply
 * @y: the times to multiply the value
 *
 * Return : The valuee mu;ltiply by y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
