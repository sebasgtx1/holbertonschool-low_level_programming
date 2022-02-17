#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long int i, n;

	int a;

	n = 612852475143;


	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
		a = i;
		n = n / i;
		}
	}
printf("%d", a);
putchar('\n');
return (0);
}
