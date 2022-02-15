#include <stdio.h>

/**
 * main - Prints + of the even-valued fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
long int f1, f2, fn, sumfnp;

f1 = 1;
f2 = 2;
fn = sumfnp = 0;
while (fn <= 4000000)
{
fn = f1 + f2;
f1 = f2;
f2 = fn;
if ((f1 % 2) == 0)
{
sumfnp += f1;
}
}
printf("%ld\n", sumfnp);
return (0);
}
