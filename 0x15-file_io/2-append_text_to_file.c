#include "main.h"
#include <stddef.h>
/**
 * append_text_to_file -A function that appends text to a file
 * @filename: name of the file
 * @text_content: content to append to file
 * Return: 1 successs and 0 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int app;/*bytes to actually append*/
	int f = 0;/*counter:counts the text_content*/
	int fd;/*file descriptor*/

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[f])
			f++;
		app = write(fd, text_content, f);
		if (app != f)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
