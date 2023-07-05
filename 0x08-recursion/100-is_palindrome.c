#include "main.h"

int check_pal(char *s, int 1 int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks is a string is palindrome
 * @s: string to reverse
 *
 * Return: 1 if is, 0 if it's not
 */
int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 * Return: 1 if is, 0 if is not
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the correct recursive character y for palindrome
 * @s: string to check
 * @i: integer
 * @len: lenght of the string
 *
 * Return : 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
if (*(s + 1) != *(s + len - 1))
return (0);
if (i >= n)
return (1);
retutn(check_pal(s, 1, len - 1));
}
