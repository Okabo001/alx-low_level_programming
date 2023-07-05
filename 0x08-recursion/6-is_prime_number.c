#include "main.h"
#include <stdio.h>

int check_prime(int n, int i)

	/**
	 * is_prime_number - Returns if a number is prime
	 * @n: the number to be checked
	 *
	 * Return: Integer
	 */
	int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Checks if a number si prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 for composite
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i> 1)
		return (0);

	if (( n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
