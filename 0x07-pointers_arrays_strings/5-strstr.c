#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *pt = needle;

		while (*p == *pt && *pt != '\0')
		{
			p++;
			pt++;
		}

		if (*pt == '\0')
			return (haystack);
	}

	return (0);
}
