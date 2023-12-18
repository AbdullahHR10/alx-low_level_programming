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

