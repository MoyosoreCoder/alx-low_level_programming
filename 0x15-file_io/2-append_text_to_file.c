#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - this append new file
 * @filename: the file name
 * @text_content: the content to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_byte;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	write_byte = write(fd, text_content, len);

	if (fd == -1 || write_byte == -1)
		return (-1);
	close(fd);

	return (1);
}
