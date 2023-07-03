#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
