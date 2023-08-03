#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @p: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > 63)
		return (-1);

	*p = (~(1UL << index) & *p);
	return (1);
}
