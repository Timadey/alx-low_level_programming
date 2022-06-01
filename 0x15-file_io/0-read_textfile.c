#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of bytes to read from the file
 * Return: the actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int r_letters;
	int w_letters;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);
	buf[letters + 1] = '\0';
	r_letters = read(fd, buf, letters);
	if (r_letters == -1)
		return (0);
	w_letters = write(STDOUT_FILENO, buf, r_letters);
	free(buf);
	close(fd);
	if (w_letters == -1)
		return (0);
	return (w_letters);
}
