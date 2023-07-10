#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with the specified name and
 * writes the given text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, close_result;
	size_t bytes_writen;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_writen = write(fd, text_content, sizeof(text_content));
		if (bytes_writen != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close_result = close(fd);
	if (close_result == -1)
		return (-1);

	return (1);
}
