#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: the number of letters it should read and prin
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	fp = fopen("filename.txt", "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, fp);
	buffer[bytesRead] = '\0';

	if (bytesRead > 0)
	{
		bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			free(buffer);
			fclose(fp);
			return (0);
		}
	}
	free(buffer);
	fclose(fp);
	return (bytesRead);
}
