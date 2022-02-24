#include "main.h"
#include <string.h>
/**
 * leet - encode a string
 * @str: string.
 * Return: the string encoded
 */

char *leet(char *str)
{
	int i = 0, j;
	char normal[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char encode[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == normal[j])
			{
				*(str + i) = encode[j];
			}
		}
	i++;
	}

return (str);
}
