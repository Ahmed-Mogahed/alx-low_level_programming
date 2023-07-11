#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int n, i;

	n = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[n] = str[n]) != '\0')
		n++;

	return (duplicate);
}
