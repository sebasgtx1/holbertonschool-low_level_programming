#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number.
 * @n2: number.
 * @r: buffer to store the result.
 * @size_r: buffer size:
 * Return: the sum in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int sn1 = 0, sn2 = 0, sum, ms, dgt1, dgt2, xtra = 0;

	while (*(n1 + sn1) != '\0')
	{
		sn1++;
	}
	while (*(n2 + sn2) != '\0')
	{
		sn2++;
	}
	if (sn1 >= sn2)
	{
		ms = sn1;
	}
	else
	{
		ms = sn2;
	}
	if (size_r <= ms + 1)
	{
		return (0);
	}
	r[ms + 1] = '\0';
	sn1--;
	sn2--;
	dgt1 = *(n1 + sn1) - 48;
	dgt2 = *(n2 + sn2) - 48;
	while (ms >= 0)
	{
		sum = dgt1 + dgt2 + xtra;
		if (sum >= 10)
		{
			xtra = sum / 10;
		}
		else
		{
			xtra = 0;
		}
		if (sum > 0)
		{
			*(r + ms) = (sum % 10) + 48;
		}
		else
		{
			*(r + ms) = '0';
		}
		if (sn1 > 0)
		{
			sn1--, dgt1 = *(n1 + sn1) - 48;
		}
		else
		{
			dgt1 = 0;
		}
		if (sn2 > 0)
			sn2--, dgt2 = *(n2 + sn2) - 48;
		else
			dgt2 = 0;
		ms--;
	}
if (*(r) == '0')
return (r + 1);
else
return (r);
}
