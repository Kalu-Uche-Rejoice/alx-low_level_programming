#include "main.h"
/**
 * append_text_to_file - appends text to the end of the file
 * @filename: pointer to file
 * @text_content: string to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_test;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY|O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	write_test = write(fd, text_content, strlen(text_content));
	if (write_test == 1)
	{
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (-1);
	}
	
	return (-1);
}
