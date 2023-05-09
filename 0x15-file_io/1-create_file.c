#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: the content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fdescriptor, resultClose;
	size_t resultWrite;

	if (filename == NULL)
		return (-1);

	fdescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		resultWrite = write(fdescriptor, text_content, strlen(text_content));
		if (resultWrite != strlen(text_content))
		{
			close(fdescriptor);
			return (-1);
		}
	}

	resultClose = close(fdescriptor);
	if (resultClose == -1)
		return (-1);

	return (1);
}
