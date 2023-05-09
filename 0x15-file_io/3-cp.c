#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fdescriptor_from, fdescriptor_to;
	ssize_t bytes_read, bytes_written;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdescriptor_from = open(argv[1], O_RDONLY);
	if (fdescriptor_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdescriptor_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdescriptor_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fdescriptor_from, buff, sizeof(buff))) > 0)
	{
		bytes_written = write(fdescriptor_to, buff, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	errorchecking(bytes_read, fdescriptor_from, fdescriptor_to, argv[1]);
	return (0);
}

/**
 * errorchecking - Performs error checking and cleanup operations.
 * @bytes_read: The number of bytes read during the file copy process.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 * @filefrom: The name of the source file.
 *
 * Return: 0 on success.
 */
int errorchecking(ssize_t bytes_read, int fd_from, int fd_to, char *filefrom)
{
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
