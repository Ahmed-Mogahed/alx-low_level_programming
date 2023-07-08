#include "main.h"

/**
 * _memset - fills a block of memory with a constant
 * @s: address of memory
 * @b: the constant value
 * @n: to change bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
