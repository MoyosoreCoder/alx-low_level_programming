#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates an empty file
 * @filename: name of the file
 * @text_content: the content that exist in the file
 *
 * Return: 1 on success -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	ssize_t write_byte;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_byte = write(fd, text_content, len);

	if (write_byte == -1 || fd == -1)
		return (-1);
	close(fd);

	return (1);
}
