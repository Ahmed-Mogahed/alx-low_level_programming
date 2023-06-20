#include "main.h"

/**
 * print—sign - print + if n is greater than zero,
              0 if n is zero and  - if n is less
 	      than zero.
 *
 * @n: the int to check
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
       	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	 else
	{
		_putchar('-');
		return (-1);
	}
}