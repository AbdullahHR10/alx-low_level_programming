#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File name
 * @letters: letters
 * Return: number of letters , or NULL if write fails or file can't be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;

	if (filename == NULL)
	{
		return (0);
	}
	p = fopen("filename.tx", "r");
