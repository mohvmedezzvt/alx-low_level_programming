#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	if (copy_file(file_from, file_to) == -1)
		exit(98);

	return (0);
}

/**
 * open_file - Open a file with the given filename, flags, and mode
 * @filename: Name of the file to open
 * @flags: Flags for opening the file
 * @mode: Permissions of the created file if applicable
 *
 * Return: File descriptor of the opened file, or -1 on failure
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file %s\n", filename);

	return (fd);
}

/**
 * copy_file - Copy the contents of file_from to file_to
 * @file_from: Source file name
 * @file_to: Destination file name
 *
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_CREAT | O_WRONLY | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}
	return (0);
}
