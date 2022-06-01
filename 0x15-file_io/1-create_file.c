#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: content tpo write into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w_letters;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content ==  NULL)
	{
		close(fd);
		return (1);
	};
	w_letters = write(fd, text_content, strlen(text_content));
	if (w_letters == -1)
	{
		close(fd);
		return (-1);
	};
	close(fd);
	return (1);
}
