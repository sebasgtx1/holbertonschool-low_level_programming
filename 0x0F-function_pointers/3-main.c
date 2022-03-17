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

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(2);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	if (!result)
	{
		printf("Error\n");
		exit(3);
	}
	printf("%d\n", result);
	return (0);
}
