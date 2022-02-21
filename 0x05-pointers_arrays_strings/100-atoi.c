#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string.
 * Return: integer.
 */
int _atoi(char *s)
{

	unsigned int count = 0, t = 0, i = 0, sig = 1, m = 1, intt = 0;

	while (*(s + count) != '\0')
	{

		if (t > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}
		if (*(s + count) == '-')
		{
			sig *= -1;
		}

		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			if (t > 0)
			{
				m *= 10;
			}
			t++;
		}
	count++;
	}

		for (i = count - t; i < count; i++)
		{
			intt = intt + (*(s + i) - 48) * m;
			m /= 10;
		}

return (sig * intt);
}
