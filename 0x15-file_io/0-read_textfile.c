#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: the actual number of letters read and printed.
 *         If the file cannot be opened or read,
 *         or if there is an error during write,
 *         or if filename is NULL, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_writen;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_writen = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_writen != bytes_read || bytes_writen == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_writen);
}
