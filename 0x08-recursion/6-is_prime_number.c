#include "main.h"

/**
 * is_prime_number - Check if the given integer is a prime or not.
 * @n: the number to be checked.
 *
 * Return: 1 if the number is a prime and 0 if otherwise.
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check for prime number.
 * @n: the number to be checked.
 * @divisor: the current divisor being checked.
 *
 * Return: 1 if the number is a prime and 0 if otherwise.
*/
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1); /* No smaller factors found, a prime number */
	if (n % divisor == 0)
		return (0); /* Found a factor, not a prime number */

	return (is_prime_helper(n, divisor + 1));
}
