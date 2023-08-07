#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @fn: A pointer to the name of the file.
 * @t_c: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *fn, char *t_c)
{
	int i, n, l = 0;

	if (fn == NULL)
		return (-1);

	if (t_c != NULL)
	{
		for (l = 0; t_c[l];)
			l++;
	}

	i = open(fn, O_WRONLY | O_APPEND);
	n = write(i, t_c, l);

	if (i == -1 || n == -1)
		return (-1);

	close(i);

	return (1);
}
