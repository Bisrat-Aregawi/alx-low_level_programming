#include "holberton.h"

/**
 * read_textfile - Function reads and prints to POSIX STDOUT
 * @filename: Name of file to read from
 * @letters: Number of letters to be read and printed
 *
 * Return: Number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count = 0, write_count = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, buffer, letters);

	close(fd);

	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);

	free(buffer);

	if (write_count != read_count)
		return (0);

	return (write_count);
}
