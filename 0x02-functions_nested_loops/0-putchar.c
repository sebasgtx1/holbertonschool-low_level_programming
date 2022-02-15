#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char array [] = {95, 112, 117, 116, 99, 104, 97, 114};

int length = sizeof(array) / sizeof(array[0]);
for (i = 0; i < length; i++)
{
putchar(array[i]);
}
putchar('\n');
return (0);
}
