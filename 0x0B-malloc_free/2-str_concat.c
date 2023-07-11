#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
* Return: a pointer to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated. NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int n, i, len1, len2, len0;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
{
	n = 0;
	while (s1[n++] != '\0')
	len1++;
}

		if (s2 != NULL)
	{
	n = 0;
	while (s2[n++] != '\0')
		len2++;
	}

	len0 = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len0 + 1));
	if (result == NULL)
	return (NULL);

	for (n = 0; n < len1; n++)
		result[n] = s1[n];
	for (i = 0; i < len2; i++, n++)
		result[n] = s2[i];
		result[len0] = '\0';

	return (result);
}
