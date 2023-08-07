#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @fn: text file being read
 * @lett: number of letters to read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *fn, size_t lett)
{
	char *b;
	ssize_t f;
	ssize_t n;
	ssize_t u;

	f = open(fn, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * lett);
	u = read(f, b, lett);
	n = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (n);
}
