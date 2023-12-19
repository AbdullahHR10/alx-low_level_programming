#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: File name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 * 1 if the file exists, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *strlength;
	ssize_t = write_result;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL || text_content[0] = '\0')
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
	return (-1);
}
