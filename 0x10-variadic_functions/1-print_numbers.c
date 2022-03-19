#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the "comma" string
 * @n: number of integers to be printed
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
