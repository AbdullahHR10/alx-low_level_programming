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
	p = open(filename, O_RDONLY);
	if (p == -1)
	{
		return (-1);
	}
	b = malloc(letters);
	if (b == NULL)
	{
		close(p);
		return (0);
	}
	bytesRead = read(p, b, letters);
	if (bytesRead == -1)
	{
		free(b);
		close(p);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, b, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(b);
		close(p);
		return (0);
	}
	free(b);
	close(p);
	return (bytesRead);
}
