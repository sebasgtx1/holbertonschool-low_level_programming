#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
char buffer[1024];
int fd_from, fd_to;
ssize_t rd_bytes;

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((rd_bytes = read(fd_from, buffer, 1024)) > 0)
	if (fd_to == -1 || rd_bytes != write(fd_to, buffer, rd_bytes))
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
if (rd_bytes == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (close(fd_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
