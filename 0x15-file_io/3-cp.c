#include "main.h"
/**
 * err_outputs - print the error ouput in each case
 * @file_from: file that coteins the text to be copied
 * @file_to: file to copy the content from file_form
 * @argv: vector of arguments
 * Return: no return
 */
void err_outputs(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
		exit(98);
	}
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, _close;
	ssize_t read_val = 1024, write_val;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_outputs(f_from, f_to, argv);
	while (read_val == 1024)
	{
		read_val = read(f_from, buff, 1024);
		if (read_val == -1)
			err_outputs(-1, 0, argv);
		write_val = write(f_to, buff, read_val);
		if (write_val == -1)
			err_outputs(0, -1, argv);
	}
	_close = close(f_to);
	if (_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	return (0);
}
