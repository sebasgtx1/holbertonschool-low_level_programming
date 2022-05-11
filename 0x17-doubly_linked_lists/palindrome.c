#include <stdio.h>

/**
 * _pow - returns the value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: x ^ y
 */

int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
	return (-1);
	y--;
	return (x * _pow(x, y));
}

/**
 * larrgestPalindrome - Find the largest palindrome made from
 * the product of two n-digit numbers.
 * @n: digits of the numbers
 * Return: the larrgest Palindrome
 */

int larrgestPalindrome(int n)
{
	int upper_limit = _pow(10, n) - 1;
	int lower_limit = 1 + upper_limit / 10;
	int max_product = 0, number, reverse, product;

	for (int i = upper_limit; i >= lower_limit; i--)
	{
		for (int j = i; j >= lower_limit; j--)
		{
			product = i * j;
			if (product < max_product)
				break;
			number = product;
			reverse = 0;
		while (number != 0)
		{
			reverse = reverse * 10 + number % 10;
			number /= 10;
		}
		if (product == reverse && product > max_product)
			max_product = product;
		}
	}
	return (max_product);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	int n = 3;
	int lp = larrgestPalindrome(n);

	printf("%d\n", lp);
	return (0);
}
