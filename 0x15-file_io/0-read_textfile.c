#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: n- actual number of bytes read and printed
 *         0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t f;
	ssize_t n;
	ssize_t r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	r = read(f, b, letters);
	n = write(STDOUT_FILENO, bu, r);

	free(bu);
	close(f);
	return (n);
}
