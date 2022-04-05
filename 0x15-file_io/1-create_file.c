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

	int fd, i = 0, write_val, read_val;
	char *buff;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[i]; i++)
			;
		buff = malloc(i);
		write_val = write(fd, text_content, i);
		if (write_val == -1)
		{
			free(buff);
			return (-1);
		}
	}

	read_val = read(fd, buff, i);
	if (read_val == -1)
	{
		free(buff);
		return (-1);
	}
	return (1);
}
