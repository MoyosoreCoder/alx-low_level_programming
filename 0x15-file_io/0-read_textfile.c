#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads texts from file
 * @filename: name of the file
 * @letters: the text in the file
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_read, byte_written;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	free(buffer);
	close(fd);

	if (byte_read == byte_written)
		return (byte_written);

	else
		return (0);
}
