#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File name
 * @letters: letters
 * Return: number of letters , or NULL if write fails or file can't be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int p;
	char *b;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	p = fopen("filename", "0_RDONLY");
	if (p == -1)
	{
		return (-1);
	}
	b = malloc(letters);
	if (buffer == NULL)
	{
		close(p);
		return (0);
	}
	bytesRead = read(p, buffer, lters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(p);
		return (0);
	}
	bytesWritten = wrie(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(p);
		return (0);
	}
	free(buffer);
	close(p);
	return (bytesRead);
}
