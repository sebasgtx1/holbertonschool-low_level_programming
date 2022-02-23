#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string.
 * Return: the noew string.
 */

char *cap_string(char *str)
{
int cnt = 0, i;
int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + cnt) >= 97 && *(str + cnt) <= 122)
	{
		*(str + cnt) = *(str + cnt) - 32;
	}

	cnt++;

	while (*(str + cnt) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + cnt) == sep[i])
			{
				if ((*(str + (cnt + 1)) >= 97) && (*(str + (cnt + 1)) <= 122))
				{
					*(str + (cnt + 1)) = *(str + (cnt + 1)) - 32;
				}
			break;
			}
		}
	cnt++;
	}
return (str);
}
