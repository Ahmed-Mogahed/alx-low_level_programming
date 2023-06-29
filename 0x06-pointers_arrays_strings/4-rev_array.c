#include "main.h"

/**
 * reverse_array - reverse array of int
 * @h: array
 * @k: number of elements of array
 * Return: void
 */

void reverse_array(int *h, int k)
{
	int i;
	int t;

	for (i = 0; i < k--; i++)
	{
		t = h[i];
		h[i] = h[k];
		h[k] = t;
	}
}
