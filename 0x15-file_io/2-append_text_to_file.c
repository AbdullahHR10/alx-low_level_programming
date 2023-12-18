#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: File name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 * 1 if the file exists, -1 if not
 */

append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
