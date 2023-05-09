#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to std output.
 * @filename: the name of the file to read.
 * @letters: the maximum number of letters to read and print.
 *
 * Return: the actual number of letters read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescriptor;
	char *buffer;
	ssize_t lettersRead, lettersWriten;

	if (filename == NULL)
		return (0);

	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fdescriptor);
		return (0);
	}

	lettersRead = read(fdescriptor, buffer, letters);
	lettersWriten = write(STDOUT_FILENO, buffer, lettersRead);

	if (lettersRead != lettersWriten)
	{
		free(buffer);
		close(fdescriptor);
		return (0);
	}

	free(buffer);
	close(fdescriptor);
	return (lettersWriten);
}
