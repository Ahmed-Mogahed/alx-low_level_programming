#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input value
 * @size: input size
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum, sum0, i;

	sum = 0;
	sum0 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum0 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, sum0);
}
