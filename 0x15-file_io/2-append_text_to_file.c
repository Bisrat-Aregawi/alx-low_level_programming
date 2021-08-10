#include "holberton.h"

int str_length(char *);

/**
 * append_text_to_file - Function appends text at the end
 * @filename: Name of the file to append to
 * @text_content: Content to append to @filename
 * Return: 1 on success, -1 on failiure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (errno != 0)
		return (-1);
	count = write(fd, text_content, str_length(text_content));
	if (count == -1)
		return (-1);
	return (1);
}

/**
 * str_length - Function returns length of a string
 * @str: String to examine
 * Return: Number of characters
 */
int str_length(char *str)
{
	int length = 0;

	while (*str)
		length++, str++;
	return (length);
}
