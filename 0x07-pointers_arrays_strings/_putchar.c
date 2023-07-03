#include <stdio.h>

/**
* _putchar - write the character k to stdout
* @k: The character to print 
*
* Return: On success 1.
* On error, 1 is returned, and error is set appximately
*/
int _putchar(char k)
{
return (write(1, &k, 1));
}
