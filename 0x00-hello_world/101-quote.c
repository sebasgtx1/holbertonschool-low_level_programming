#include <stdio.h>
/**
 * main - prints to the stderr
 *
 * Return: Always 1 (Success)
 */

int main(void)

{
char *x;

x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n";

fwrite(x, 58, 1, stderr);

printf("\n");

return (1);

}
