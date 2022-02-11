#include <stdlib.h>
#include <time.h>

/**
 * main - prints a messge with printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
printf("%i is negative", n)
}

else
{
printf("%i is positive", n)
}

return (0);
}
