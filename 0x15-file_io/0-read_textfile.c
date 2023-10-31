#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads text & prints on screen
 * @filename: file to read & printf from
 * @letters: number of letters to read & print
 * Return: Actual no of letters to read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file descriptor*/
	int t; /*no. of bytes read*/
	int w; /*no. of bytes printed*/
	char *buf; /*temp stores data to read*/

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}
	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		return (0);
	}
	buf[t] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buf, t);
	if (w == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
