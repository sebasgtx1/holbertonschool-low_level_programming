#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
int i, a, i2;

	for (i2 = 0; i2 < 10; i2++)
	{
	i = 48;
	a = 0;
		for (i = 48; i <= 58; i++)
		{
			if (a == 775)
			{
				break;
			}
			if (a >= 525)
			{
				_putchar(49);
			}
			if (a == 525)
			{
				i = 48;
			}
				_putchar(i);
			if (a == 727)
			{
				break;
			}
		a += i;
		}
	_putchar('\n');
}
}
