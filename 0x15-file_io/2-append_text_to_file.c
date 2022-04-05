#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: is the NULL terminated string to add at the
 * end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, write_val;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (; text_content[i]; i++)
		;

	write_val = write(fd, text_content, i);

	if (write_val == -1)
		return (-1);

	close(fd);
	return (1);
}
