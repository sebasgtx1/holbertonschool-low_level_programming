#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	int i;
	long int n;

	n = 612852475143;

	while (n % 2 == 0)
	{
	printf("2 ");
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
		printf("%d ", i);
		n = n / i;
		}
	}
putchar('\n');
return (0);
}
