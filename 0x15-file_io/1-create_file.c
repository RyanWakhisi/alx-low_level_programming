#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * create_file - A function that creates a file
 * @filename: name of file to be created
 * @text_content: content to be written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /*file descriptor*/
	int w; /*bytes to actually write*/
	int f = 0;/*counter, counts text_content*/

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[f])
			f++;
		w = write(fd, text_content, f);
		if (w != f)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
