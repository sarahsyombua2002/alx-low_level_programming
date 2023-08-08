#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output.
 * @filename:text being read
 * @letters:number of letters to be read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	free(buf);
	close(fd);
	return (w);
}
