#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, -ve on failure
 */
int main(int argc, char **argv)
{
	int file_to_fd;
	int file_from_fd;
	int r_file_from;
	char *buf;

	if (argc != 3 || argv[0] == NULL || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if((file_from_fd = open(argv[1], O_RDONLY | O_EXCL)) == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't read from  file %s\n", argv[1]);
		exit(98);
	}
	if((file_to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664)) == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(1024);
	while ((r_file_from = read(file_from_fd, buf, 1024)) > 0)
	{

		if(write(file_to_fd, buf, 1024) == -1)
		{
			dprintf(STDERR_FILENO, "Error Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't read from  file %s\n", argv[1]);
		exit(98);
	}
	free(buf);
	if (close(file_to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file_to_fd);
		exit(100);
	}
	if (close(file_from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file_from_fd);
		exit(100);
	}
	return (0);

}
