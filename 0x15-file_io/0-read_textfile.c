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
	char *memory;
	ssize_t bytesRead, bytesWritten;

	fp = open(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	memory = (char *)malloc(sizeof(char));
	if (memory == NULL)
	{
		close(fp);
		return (0);
	}
	bytesRead = read(memory, sizeof(char), letters, fp);
	close(fp);
	return (bytesRead);
}
