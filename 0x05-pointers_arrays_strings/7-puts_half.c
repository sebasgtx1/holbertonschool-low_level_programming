#include "main.h"
/**
 * puts_half -  prints a string, followed by a new line, to stdout
 * @str: string
 * Return: string
 */

void puts_half(char *str)
{
int i = 0;
int n = 0;
	while (*(str + i) != '\0')
	{
	i++;
	}

	if (i % 2 != 0)
	{
	n = i / 2;
	}

	else
	{
	n = (i - 1) / 2;
	}
	for (n++; n < i; n++)
	{
	_putchar(str[n]);
	}
_putchar('\n');
}
