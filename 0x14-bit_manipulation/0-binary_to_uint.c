#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @s: string containing binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *s)
{
	int n;
	unsigned int dec_val = 0;

	if (!s)
		return (0);

	for (n = 0; s[n]; n++)
	{
		if (s[n] < '0' || s[n] > '1')
			return (0);
		dec_val = 2 * dec_val + (s[n] - '0');
	}

	return (dec_val);
}
