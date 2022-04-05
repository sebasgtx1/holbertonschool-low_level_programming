#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to;
	ssize_t read_val;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_val = read(f_from, buff, 1024)) > 0)
	{
		if (f_to == -1 || read_val != write(f_to, buff, read_val))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (read_val == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	if (close(f_form) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
