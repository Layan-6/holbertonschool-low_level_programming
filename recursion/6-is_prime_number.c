#include "main.h"

/**
 * is_divisible - Helper function to check if n is divisible by divisor
 * @n: The number to check
 * @divisor: The divisor to check
 *
 * Return: 1 if not divisible, 0 if divisible
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, n - 1));
}
