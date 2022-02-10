#include <stdio.h>
/**
 * main - prints the variable sizes
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char charType;
int intType;
long int longintType;
long long int llintType;
float floatType;

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(llintType));
printf("Size of long float: %zu bytes\n", sizeof(floatType));

return (0);

}
