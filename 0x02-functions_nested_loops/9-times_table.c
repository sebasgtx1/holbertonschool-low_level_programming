#include <stdio.h>
/**
 * times_table - Prints a times table
 *
 * Return: Always 0 (Success)
 */
int times_table(void)
{
int i, a, d;
i = 48;
while (i < 58)
{
for (a = 48; a < 58; a++)
{
d = (a - 48) * (i - 48);
printf("%i", d);
printf(",");
printf(" ");
}
putchar('\n');
i++;
}
return (0);
}
