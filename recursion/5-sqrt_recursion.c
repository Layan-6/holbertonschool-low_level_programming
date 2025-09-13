#include "main.h"

/**
 * _sqrt_helper - Helper function to find square root using binary search
 * @n: The number to find the square root of
 * @start: The starting point for search
 * @end: The ending point for search
 *
 * Return: Natural square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_helper(n, mid + 1, end));
	else
		return (_sqrt_helper(n, start, mid - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: Natural square root of n, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}
