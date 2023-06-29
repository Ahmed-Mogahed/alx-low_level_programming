#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @c: pointer to string params
 * Return: *c
 */

char *rot13(char *c)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == data1[j])
			{
				c[i] = datarot[j];
				break;
			}
		}
	}
	return (c);
}
