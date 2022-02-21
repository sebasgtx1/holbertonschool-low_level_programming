#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: no return
 */

void rev_string(char *s)
{

int i, f, j;
i = 0;
	while (*(s + i) != '\0')
	{
	i++;
	}
	f = i--;
	for (j = 0; j < i ; j++)
	{
	s[j] = s[f];
	f--;
	}
s[0] = '\0';
}
