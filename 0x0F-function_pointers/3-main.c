#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int (*func)(int,int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
