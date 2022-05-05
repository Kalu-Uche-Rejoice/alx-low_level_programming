#include "main.h"
/**
 * read_textfile - reads text file and prints to standard output
 * filename: pointer to file
 * letters: number of letters to read and print
 * Return number of successful reads
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s_read, s_write;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	/*instruction to open file*/
	fd = open(file name, O_RONLY);
	/*test for successful open*/
	if (fd == 1)
		return (0);
	
	/*malloc to create buffer*/
	buffer = malloc(sizeof(char) * letters);
	/*test for malloc*/
	if (buffer == NULL)
		return 0;

	/*instruction to read*/
	s_read = read(fd, buffer, letters);
	/*test for successful read*/
	if (s_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/*instruction to write\print*/
	s_write = write(STDOUT_FILENO, buffer, s_read);
	/*test for sucessful write*/
	if (s_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (s_read);
}
