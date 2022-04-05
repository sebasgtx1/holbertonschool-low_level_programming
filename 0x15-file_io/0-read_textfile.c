#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of chars in the file
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t read_val, write_val;

	if (!filename)
		return ('\0');
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buff = malloc(letters);

	if (!buff)
		return (0);

	read_val = read(fd, buff, letters);
	write_val = write(STDOUT_FILENO, buff, read_val);

	if (read_val == -1 || write_val == -1)
		return (0);
	close(fd);
	free(buff);
	return (read_val);
}
