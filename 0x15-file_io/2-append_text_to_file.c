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
	FILE *fptr;
	int result = -1;

	if (filename == NULL)
		return (-1);

	fptr = fopen(filename, "a");
	if (fptr == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fputs(text_content, fptr) != EOF)
			result = 1;
	}

	fclose(fptr);
	return (result);
}
