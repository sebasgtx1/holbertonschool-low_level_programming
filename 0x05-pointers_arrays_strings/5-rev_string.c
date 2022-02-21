#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: no return
 */

void rev_string(char *s)
{
char r[1000];
int i, f, j;
i = 0;

	while (*(s + i) != '\0')
	{
	r[i] = *(s + i);
	i++;
	}
	f = i - 1;
	for (j = 0; j < i ; j++)
	{
	*(s + j) = r[f];
	f--;
	}
}
