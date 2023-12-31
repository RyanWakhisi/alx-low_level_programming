#include "main.h"
/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments(args vector)
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, q, v, r;
	char BUFF[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_r, BUFF, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, BUFF, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	q = close(fd_r);
	v = close(fd_w);
	if (q == -1 ||  v == -1)
	{
		if (q == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (v == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
