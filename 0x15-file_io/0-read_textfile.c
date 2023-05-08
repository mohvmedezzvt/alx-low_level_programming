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
	FILE *fptr;
	char *buffer;
	ssize_t lettersRead, lettersWriten;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}

	lettersRead = fread(buffer, sizeof(char), letters, fptr);
	if (lettersRead == 0)
	{
		fclose(fptr);
		return (0);
	}
	buffer[lettersRead] = '\0';
	fclose(fptr);

	lettersWriten = printf("%s", buffer);
	if (lettersWriten < lettersRead)
		return (0);

	return (lettersRead);
}
