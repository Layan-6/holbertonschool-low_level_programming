#include "main.h"

#define BUF_SIZE 1024

/**
 * print_error - prints error message to stderr
 * @msg: error message to print
 * @arg: argument for the message (filename or fd)
 * @code: exit code
 */
void print_error(char *msg, char *arg, int code)
{
	if (arg)
		dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * close_file - closes a file descriptor and checks for errors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_files - opens source and destination files
 * @argv: argument vector
 * @fd_from: pointer to source file descriptor
 * @fd_to: pointer to destination file descriptor
 */
void open_files(char *argv[], int *fd_from, int *fd_to)
{
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);

	*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (*fd_to == -1)
	{
		close_file(*fd_from);
		print_error("Error: Can't write to", argv[2], 99);
	}
}

/**
 * copy_content - copies content from source to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @argv: argument vector
 */
void copy_content(int fd_from, int fd_to, char *argv[])
{
	ssize_t bytes_read;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error("Error: Can't write to", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error("Error: Can't read from file", argv[1], 98);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or exit with error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", NULL, 97);

	open_files(argv, &fd_from, &fd_to);
	copy_content(fd_from, fd_to, argv);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
