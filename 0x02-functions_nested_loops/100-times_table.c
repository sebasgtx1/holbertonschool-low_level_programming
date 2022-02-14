#include <stdio.h>
/**
 * times_table - Prints a times table
 * @i: times
 * Return: Always 0 (Success)
 */
int times_table(int i)
{
int a, d, e;

while (e < i)
{
for (a = 0; a < i; a++)
{
if (a == (i - 1))
{
d = a * e;
printf("%i", d);
break;
}
d = a * e;
printf("%i", d);
printf(",");
printf(" ");

}
e++;
putchar('\n');
}
return (0);
}
