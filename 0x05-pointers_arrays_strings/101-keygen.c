#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - give a random key
 * Return: no return
 */
void main(void)
{
	int n;

	srand(time(NULL));
	n = rand();
	
	printf("%d", n);

	
}
