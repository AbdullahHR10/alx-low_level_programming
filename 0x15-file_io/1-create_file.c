#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, strlength;
	ssize_t write_result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}
	strlength = strlen(text_content);
	write_result = write(fd, text_content, strlength);
	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
