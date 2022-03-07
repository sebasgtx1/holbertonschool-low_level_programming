#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, size = 0, j, k;

	if (ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = j = k = 0; k < size; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			s[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < size - 1)
			s[k] = av[i][j];
	}
	s[k] = '\0';

	return (s);
}
