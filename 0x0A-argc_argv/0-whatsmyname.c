#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc: count of argu
 * @argv: value of argu
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
