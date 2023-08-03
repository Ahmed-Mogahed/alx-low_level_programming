#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @n1: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int n1)
{
	int i, counter = 0;
	unsigned long int c;
	unsigned long int exclusive = n ^ n1;

	for (i = 63; i >= 0; i--)
	{
		c = exclusive >> i;
		if (c & 1)
			counter++;
	}

	return (counter);
}
