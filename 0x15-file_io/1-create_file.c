#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to the file
 * @text_content: text content to be writed in the crated file
 * Return: 1 on success
 * -1 on failure (file can not be created, file can not be written,
 *  write “fails”, etc…)
 *  if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{

	int fd, i = 0, write_val;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
		text_content = "";

	for (; text_content[i]; i++)
		;

	write_val = write(fd, text_content, i);
	if (write_val == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
