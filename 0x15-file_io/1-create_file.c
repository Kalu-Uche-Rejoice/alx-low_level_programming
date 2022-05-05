#include "main.h"

/**
 * create_file - function to create file
 * filename: pointer to the file
 * text_content: pointer to file content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_test;

	if (filename == NULL)
		return (-1);
	/*INSTRUCTION TO OPEN OR CREATE FILE*/
	fd = open(filename, O_CREAT, 0600);
	/*test for successful open*/
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}
	/*INSTRUCTION TO WRITE TO FILE*/
	write_test = write(fd, text_content, strlen(text_content));
	/*test for write*/
	if (write_test == -1)
	{
		close (fd);
		return (-1);
	}

	close(fd);
	return (fd);
}
