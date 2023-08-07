#include "main.h"

/**
 * create_file - Creates a file.
 * @fn: A pointer to the name of the file to create.
 * @t_c: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *fn, char *t_c)
{
	int f, n, l = 0;

	if (fn == NULL)
		return (-1);

	if (t_c != NULL)
	{
		for (l = 0; t_c[l];)
			l++;
	}

	f = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(f, t_c, l);

	if (f == -1 || n == -1)
		return (-1);

	close(f);

	return (1);
}
