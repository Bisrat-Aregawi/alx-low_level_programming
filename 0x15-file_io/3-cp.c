#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
void exit_func_97(int);
void exit_func_98(int, char *);
void exit_func_99(int, char *);
void exit_func_100(int);
/**
 * main - Function performs like cp linux command
 * @argc: Number of arguments passed
 * @argv: Array of string pointers
 * Return: argc_err(97), fd_from_err(98), fd_to_err(99), close_err(100)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int read_count = 1024, write_count;
	char buff[1024];
	mode_t PERMISSIONS;

	exit_func_97(argc);

	PERMISSIONS = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(argv[1], O_RDONLY);
	exit_func_98(fd_from, argv[1]);
	fd_to = open(argv[2], O_RDONLY);

	if (fd_to == -1)
	{
		close(fd_to);
		fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, PERMISSIONS);
	} else
	{
		close(fd_to);
		fd_to = open(argv[2], O_RDWR | O_TRUNC);
	}
	exit_func_99(fd_to, argv[2]);

	while (read_count == 1024)
	{
		read_count = read(fd_from, buff, 1024);
		write_count = write(fd_to, buff, read_count);
		exit_func_99(write_count, argv[2]);
	}
	exit_func_100(fd_from);
	exit_func_100(fd_to);
	return (0);
}

/**
 * exit_func_97 - Function checks for correct number of arguments
 * @argc: Number of arguments passed
 * Return: void
 */
void exit_func_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exit_func_98 - Function checks existance and/or readability of 'file_from'
 * @fd_from: File descriptor of 'file_from'
 * @argv: String specifying argument 2
 * Return: void
 */
void exit_func_98(int fd_from, char *argv)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}

/**
 * exit_func_99 - Function checks for writeablity and/or creation of 'file_to'
 * @fd_to: File descriptor of 'file_to'
 * @argv: String specifying argument 3
 * Return: void
 */
void exit_func_99(int fd_to, char *argv)
{
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}

/**
 * exit_func_100 - Function checks close operation on file descriptors
 * @fd: File descriptor
 * Return: void
 */
void exit_func_100(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
