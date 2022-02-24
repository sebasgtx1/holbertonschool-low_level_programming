#include "main.h"
#include <string.h>
/**
 * rot13 - encode a string
 * @str: string.
 * Return: the string encoded
 */

char *rot13(char *str)
{
	int i = 0, j;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == normal[j])
			{
				*(str + i) = encode[j];
				break;
			}
		}
	i++;
	}

return (str);
}
