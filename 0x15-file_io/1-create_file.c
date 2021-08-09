#include "holberton.h"

int str_length(char *);
/**
 * create_file - Function creates a file named @filename
 * @filename: Name of file to be created
 * @text_content: Content to store in @filename
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cnt = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	cnt = write(fd, text_content, str_length(text_content));
	close(fd);
	if (cnt == -1)
		return (-1);
	return (1);
}

/**
 * str_length - Function returns number of characters in string
 * @str: Pointer to string
 * Return: Count of characters in @str
 */
int str_length(char *str)
{
	int length = 0;

	while (*str)
		length++, str++;
	return (length);
}
