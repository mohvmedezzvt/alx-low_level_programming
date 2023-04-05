#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: the number to check if it is prime or not.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	return(is_prime_helper(n, 2));
}

/**
 * is_prime_helper - 
 * @n: 
 * @i: 
 *
 * Return: 
 */
int is_prime_helper(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);

	return (is_prime_helper(n, i + 1));
}
