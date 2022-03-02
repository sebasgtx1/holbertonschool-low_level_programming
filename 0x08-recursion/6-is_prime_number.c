#include "main.h"
/**
 * _is_prime_or_not - determinates if a number is prime of not by iteration
 * @n: number to confirm if prime or not
 * @d: divider
 * Return: 0 if is prime 1 if not
 */
int _is_prime_or_not(int n, int d)
{

	if (n % d == 0)
	{
		if (n == d)
			return (1);

		else
			return (0);
	}
	d++;
	return (_is_prime_or_not(n, d));
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to be check
 * Return: 0 if is prime 1 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_is_prime_or_not(n, 2));
}
