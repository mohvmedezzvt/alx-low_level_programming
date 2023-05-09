#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the text to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescriptor, letterswritten;

	if (filename == NULL)
		return (-1);

	fdescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fdescriptor < 0)
		return (-1);

	if (text_content != NULL)
	{
		letterswritten = write(fdescriptor, text_content, strlen(text_content));
		if (letterswritten == -1)
		{
			close(fdescriptor);
			return (-1);
		}
	}

	close(fdescriptor);
	return (1);
}
