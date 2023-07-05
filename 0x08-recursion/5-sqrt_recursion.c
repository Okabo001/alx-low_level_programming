#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: number to calculate the natural square root
*
* Return the natural square root
*/
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (n < 0)
{

return (-1);
}

int sqrt_prev = _sqrt_recursion(n - 1);
int s = sqrt_prev + 2 * (n - 1) / (sqrt_prev + 1);

if (s * s == n)
{
return (s);
}
else
{
return (sqrt_prev);
}
}

