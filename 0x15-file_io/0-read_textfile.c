#include "main.h"

/**
 * read_textfile - the function read and print texefile
 * @filename: pointer to file name
 * @letters: number of lettres
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t by;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	by = read(fd, &buf[0], letters);
	by = write(STDOUT_FILENO, &buf[0],by);
	close(fd);

	return (by);
}
