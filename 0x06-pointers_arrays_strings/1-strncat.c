#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input-value
 * @src: input-value
 * @n: input-value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int h;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
	dest[i] = src[h];
	i++;
	h++;
	}
	dest[i] = '\0';
	return (dest);
}
